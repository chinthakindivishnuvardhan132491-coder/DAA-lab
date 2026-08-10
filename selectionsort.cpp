#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {     for (int i = 0; i < n - 1; i++) {         int min_idx = i;         for (int j = i + 1; j < n; j++) {             if (arr[j] < arr[min_idx]) {                 min_idx = j;
            }
        }         if (min_idx != i) {             int temp = arr[i];             arr[i] = arr[min_idx];             arr[min_idx] = temp;
        }
    }
}


void printArray(int arr[], int n) {     for (int i = 0; i < n; i++)         cout << arr[i] << " ";
    cout << endl;
}

int main() {     int n;
    cout << "Enter the number of elements: ";     cin >> n;     int* arr = new int[n];     cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)         cin >> arr[i];

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    // Enter your roll number
    cout << "Roll No: 92460118608" << endl;

    delete[] arr;     return 0;
}
