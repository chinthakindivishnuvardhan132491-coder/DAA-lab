#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++) {         cin >> A[i];
    }

    cout << "Enter the element to search: ";     cin >> key;

    int low = 0;     int high = n - 1;
    int position = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (A[mid] == key) {             position = mid;             break;
        }
        else if (key < A[mid]) {
            high = mid - 1;
        }         else {
            low = mid + 1;
        }
    }

    if (position != -1) {
        cout << "Element found at position " << position + 1;
    }
    else {
        cout << "Element not found";
    }
// Enter your roll number
    cout << endl << "Roll No: 92460118608";

   return 0; }
