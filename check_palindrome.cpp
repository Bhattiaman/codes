#include <iostream>
#include <cstring>
using namespace std;

// void reverse_String(char name[]) {
//     int s = 0, e = strlen(name) - 1; // Changed name.size() to strlen(name)
//     while (s < e) {
//         swap(name[s], name[e]);
//         s++;
//         e--;
//     }
// }

bool checkpalindrome(char name[]){
    int n = strlen(name);
    int s= 0;
    int e = n - 1;
    while(s < e){
        if(name[s] != name[e]) return false;
        s++;
        e--;
    }
}

int main() {
    char name[30];
    cout << "Enter your name: ";
    cin.getline(name, 30); // Use cin.getline() to read the entire line including spaces
    
    // reverse_String(name);
    cout << "Reversed name: " << name << endl;
    bool isPalindrome = checkpalindrome(name);
    cout << "Is palindrome? " << (isPalindrome ? "Yes" : "No") << endl;

    return 0;
}
