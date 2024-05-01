#include<bits/stdc++.h>
using namespace std;

int find_Unique(int num[],int n){
    // using the XOR method
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ num[i];
    }
    return ans;
}

int main(){
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout<<find_Unique(num,size);

}