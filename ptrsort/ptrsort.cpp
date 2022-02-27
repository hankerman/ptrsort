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
    const int size = 10, size2 = 20;
    int arrA[size], arrB[size2], arrC[size + size2];
    int* ptra = arrA;
    int* ptrb = arrB;
    int countA = 0, countB = 0;

    fill(arrA, size);
    fill(arrB, size2);
    cout << "arrA - ";
    print(arrA, size);
    cout << "arrB - ";
    print(arrB, size2);
    BubleSort(arrA, size);
    BubleSort(arrB, size2);
    cout << "arrA - ";
    print(arrA, size);
    cout << "arrB - ";
    print(arrB, size2);

    for (int i = 0; i < size + size2; i++) {
        if (*ptra < *ptrb) {
            if (countA >= size) {
                arrC[i] = *ptrb;
            }
            else {
                arrC[i] = *ptra;
                ptra++;
                countA++;
            }
            
        }
        else {
            if (countB >= size2) {
                arrC[i] = *ptra;
            }
            else {
                arrC[i] = *ptrb;
                ptrb++;
                countB++;
            }
            
        }
    }
    cout << "arrC - ";
    print(arrC, size + size2);

}
