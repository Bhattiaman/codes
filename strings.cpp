#include <iostream>
#include <cstring>
using namespace std;



int main() {
    char name[30];
    cout << "Enter your name: ";
    cin.getline(name, 30); // Use cin.getline() to read the entire line including spaces
    
   
    cout << "Reversed name: " << name << endl;

    return 0;
}
