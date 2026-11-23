/*﻿*****************************
* Автор:   Чупин Артем        *
* Задание: Функции            *
* Вариант: 31                 *
*******************************/

#include <iostream>

using namespace std;

int difference(int array[], int size) {
    int max = array[0];
    int min = array[0];
    int result;

    for (int index = 1; index < size; ++index) {
        if (array[index] > max) {
            max = array[index];
        }

        if (array[index] < min) {
            min = array[index];
        }
    }

    result = max - min;
    return result;
}

int main() {
	const int n = 7, m = 5, k = 3;
	int X[n], Y[m], Z[k];

    cout << "Enter elements of X: " << endl;
    for (int index = 0; index < n; ++index) {
        cout << "Element " << index + 1 << ": ";
        cin >> X[index];
    }

    cout << "Enter elements of Y: " << endl;
    for (int index = 0; index < m; ++index) {
        cout << "Element " << index + 1 << ": ";
        cin >> Y[index];
    }

    cout << "Enter elements of Z: " << endl;
    for (int index = 0; index < k; ++index) {
        cout << "Element " << index + 1 << ": ";
        cin >> Z[index];
    }

    cout << "Difference X: " << difference(X, n) << endl
         << "Difference Y: " << difference(Y, m) << endl
         << "Difference Z: " << difference(Z, k) << endl;
}