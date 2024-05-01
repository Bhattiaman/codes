#include <iostream>
using namespace std;

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.


//check valid char or not
bool validChar(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return true;
    } else {
        return false;
    }
}

// lowercase case convert
char lowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// check palindrome or not
bool checkPalin(string str) {
    int s = 0;
    int e = str.length() - 1;
    while (s < e) {
        if(str[s] != str[e]){
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;
}

bool isPalindrome(string s){
    // delete the extra char
    string temp = "";
    for(int j = 0; j < s.length();j++){
        if(validChar(s[j])){
            temp.push_back(s[j]);
        }
    }

    //convert into lowercase case
    for(int i = 0; i < temp.length();i++){
        temp[i] = lowerCase(temp[i]);                       
    }                                                           

    return checkPalin(temp);

}
int main(){

    string s;
    cin>>s;
    cout<<isPalindrome(s)<<endl;

    return 0;
}
