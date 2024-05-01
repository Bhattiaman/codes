#include<bits/stdc++.h>
using namespace std;

void alternate(int num[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        swap(num[i], num[i + 1]);
    }
}

int main() {
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "alternate array is: " << endl;
    alternate(num, size);
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }

    return 0;
}
