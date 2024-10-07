// 9. Знайти суму елементів головної діагоналі квадратної матриці (слід матриці).//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int rows, cols;
    int** array;

    cout << "Введіть розмір квадратної матриці: ";
    cin >> rows;
    cols = rows; 


    srand(time(0));
    array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 101 - 50;
        }
    }

    cout << "              Матриця:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    // Обчислення суми елементів головної діагоналі
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += array[i][i];
    }
    cout << "\nСума елементів головної діагоналі квадратної матриці: " << sum << endl;

    // Звільнення пам'яті
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;

    }

