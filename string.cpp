#include <iostream>
#include <cstring>
using namespace std;

void reverse_String(char name[]) {
    int s = 0, e = strlen(name) - 1; // Changed name.size() to strlen(name)
    while (s < e) {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int main() {
    char name[30];
    cout << "Enter your name: ";
    cin.getline(name, 30); // Use cin.getline() to read the entire line including spaces
    
    reverse_String(name);
    cout << "Reversed name: " << name << endl;

    return 0;
}
