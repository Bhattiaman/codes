#include<bits/stdc++.h>
using namespace std;
int pair_sum(int num[],int n, int target){
    vector<vector<int>> ans;
    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if(num[i] + num[j] == target){
                ans.push_back(min(num[i],num[j]));
                ans.push_back(max(num[i],num[j]));
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans.size();

}

int main() {
    int size;
    cin >> size;
    int num[size];
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    int target = 4;
    cout << "Duplicate element is: " << pair_sum(num, size, target);
    return 0;
}
