#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Останні i елементів вже на своєму місці
        for (int j = 0; j < n - i - 1; j++) {
            // Міняємо місцями, якщо елемент більший за наступний
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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

    cout << "Початковий масив:\n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Відсортований масив:\n";
    printArray(arr, n);

    delete[] arr;  // Звільняємо пам'ять

    return 0;
}
