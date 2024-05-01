#include <iostream>
using namespace std;

void findIntersection(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main() {
    int m, n;
    cout << "Enter size of array 1: ";
    cin >> m;
    int arr1[m];
    cout << "Enter elements of array 1 in sorted order: ";
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of array 2: ";
    cin >> n;
    int arr2[n];
    cout << "Enter elements of array 2 in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection of the two arrays is: ";
    findIntersection(arr1, arr2, m, n);
    
    return 0;
}
