#include <iostream>
using namespace std;

int find_duplicate(int num[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = ans ^ num[i];
    }

    for (int i = 1; i < n; i++) { // Changed starting index from 0 to 1
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    int size;
    cin >> size;
    int num[size];
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << "Duplicate element is: " << find_duplicate(num, size);
    return 0;
}
