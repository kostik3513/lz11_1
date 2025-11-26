#include <iostream>
#include <windows.h>
using namespace std;

void findMaxInMatrix(int A[4][4], int& maxVal, int& maxRow, int& maxCol) {
    maxVal = A[0][0];
    maxRow = 0;
    maxCol = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A[4][4];
    cout << "Введіть 16 цілих чисел матриці 4x4 (рядок за рядком):\n";
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            cin >> A[i][j];

    int maxVal, maxRow, maxCol;
    findMaxInMatrix(A, maxVal, maxRow, maxCol);

    cout << "\nНайбільший елемент: " << maxVal << "\n";
    cout << "Індекси (рядок, стовпець) : (" << maxRow << ", " << maxCol << ")\n";
    cout << "Індекси (1-базовані): (" << (maxRow + 1) << ", " << (maxCol + 1) << ")\n";

    return 0;
}
