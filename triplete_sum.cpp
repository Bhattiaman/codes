#include <iostream>
using namespace std;

void findTriplets(int arr[], int n, int targetSum) {
    bool found = false;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i] + arr[j] + arr[k] == targetSum) {
                    cout << "Triplet found: " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                    found = true;
                }
            }
        }
    }
    if (!found) {
        cout << "No triplet found with sum " << targetSum << endl;
    }
}

int main() {
    int n, targetSum;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> targetSum;

    findTriplets(arr, n, targetSum);

    return 0;
}
