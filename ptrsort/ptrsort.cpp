#include <iostream>
using namespace std;

void fill(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

void BubleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    const int size = 5;
    int arrA[size], arrB[size], arrC[size * 2];
    int* ptra = arrA + (size - 1);
    int* ptrb = arrB + (size - 1);

    fill(arrA, size);
    fill(arrB, size);
    cout << "arrA - ";
    print(arrA, size);
    cout << "arrB - ";
    print(arrB, size);
    BubleSort(arrA, size);
    BubleSort(arrB, size);
    cout << "arrA - ";
    print(arrA, size);
    cout << "arrB - ";
    print(arrB, size);

    for (int i = (size * 2) - 1; i >= 0; i--) {
        if (*ptra > *ptrb) {
            arrC[i] = *ptra;
            ptra--;
        }
        else {
            arrC[i] = *ptrb;
            ptrb--;
        }
    }
    cout << "arrC - ";
    print(arrC, size * 2);

}
