#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "Ru");
    int x, y;
    int sum = 0; // Переменная для суммы элементов

    // Инициализация генератора случайных чисел
    std::srand(static_cast<unsigned int>(std::time(0)));

    cout << "Введите количество строк (x): ";
    cin >> x;
    cout << "Введите количество столбцов (y): ";
    cin >> y;

    // Создание двумерного массива
    int** array = new int* [x];
    for (int i = 0; i < x; i++)
    {
        array[i] = new int[y];
    }

    // Заполнение массива случайными значениями от 1 до 100
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            array[i][j] = std::rand() % 100 + 1;
            sum += array[i][j]; // Добавление значения к сумме
        }
    }

    // Вывод массива
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Вывод суммы всех элементов массива
    cout << "Сумма всех элементов массива: " << sum << endl;

    // Освобождение памяти
    for (int i = 0; i < x; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}