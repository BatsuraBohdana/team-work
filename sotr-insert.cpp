#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Переміщення елементів, які більші за key, на одну позицію вперед
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int* arr = new int[n];  // Динамічний масив

    cout << "Введіть " << n << " елемент(ів): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Початковий масив: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Відсортований масив: ";
    printArray(arr, n);

    delete[] arr;  // Звільняємо пам'ять

    return 0;
}
