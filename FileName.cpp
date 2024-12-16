#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x, y;
    setlocale(LC_ALL, "Ru");

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(0)));

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
            array[i][j] = rand() % 100 + 1;
        }
    }

    // Вывод массива
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Освобождение памяти
    for (int i = 0; i < x; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}