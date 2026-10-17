CPP_FILE=$(ls *.cpp | head -n 1)

# Создаем папку для проваленных тестов (и очищаем старые)
rm -rf failed_tests
mkdir -p failed_tests
mkdir -p build

if [ -z "$CPP_FILE" ]; then
    echo "Ошибка: .cpp файл не найден в текущей папке!"
    exit 1
fi

echo "Компиляция $CPP_FILE..."
g++-16 -std=c++20 -O2 "$CPP_FILE" -o build/main

if [ $? -ne 0 ]; then
    echo "Ошибка компиляции!"
    exit 1
fi

if [ ! -d "tests" ]; then
    echo "Ошибка: папка 'tests' не найдена!"
    exit 1
fi

for TEST_IN in tests/*.in; do
    TEST_NAME=$(basename "$TEST_IN" .in)
    TEST_OUT="tests/${TEST_NAME}.out"

    if [ ! -f "$TEST_OUT" ]; then
        continue
    fi

    ./build/main < "$TEST_IN" > build/my_output.txt

    if diff -q build/my_output.txt "$TEST_OUT" > /dev/null; then
        echo "✅ Тест $TEST_NAME: OK"
    else
        echo "❌ Тест $TEST_NAME: FAILED"

        cp "$TEST_IN" "failed_tests/${TEST_NAME}_input.in"
        cp "$TEST_OUT" "failed_tests/${TEST_NAME}_expected.out"
        cp build/my_output.txt "failed_tests/${TEST_NAME}_actual.out"

        echo "Файлы для отладки сохранены в папку 'failed_tests'"
        exit 1
    fi
done

rm -f build/my_output.txt
echo "Все тесты пройдены!"
