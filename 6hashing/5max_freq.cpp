#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,3,4,5,6,};
    unordered_map<int,int> mpp ;
    for(int i = 0; i < sizeof(arr)/4; i ++){
        mpp[arr[i]] ++;
    }
    int maxf = INT_MIN;
    for(auto it : mpp){
        if(maxf < it.second) maxf = it.second;
    }
    cout << maxf;
    return 0;
}