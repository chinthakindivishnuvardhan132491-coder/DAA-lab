#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter the number of elements: ";     cin >> n;

    int A[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {         cin >> A[i];
    }

    cout << "Enter the element to search: ";     cin >> key;

    int position = -1;

    for (int i = 0; i < n; i++) {         if (A[i] == key) {             position = i;             break;
        }
    }

    if (position != -1) {
        cout << "Element found at position " << position + 1;
    } else {
        cout << "Element not found";
    }
// Enter your roll number
    cout << endl << "Roll No: 92460118608";

   return 0; }
