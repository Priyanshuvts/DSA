#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] {3,1,-2,-5,2,-4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> pos , neg;
    for(int i = 0; i < n ; i++){
        if(arr[i] > 0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }
    for(int i = 0; i < n; i ++){
        if(i % 2 == 0) arr[i] = pos[i/2];
        else arr[i] = neg[(i - 1)/2];
    }
    for(auto val : arr){
        cout << val << " ";
    }
    return 0;
}