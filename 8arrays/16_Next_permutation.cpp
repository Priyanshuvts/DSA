#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,4,5,4,3,0,0};
    int n = arr.size();
    int i = n - 2, j = n - 1;
    while(j > 0){
        if(arr[i] < arr[j]) {
            swap(arr[i] , arr[j]);
            break;
        }
        else{
            i --;
            j--;
        }
    }
    sort(arr.begin() + j, arr.end());
    for(auto val : arr){
        cout << val << " ";
    }
    return 0;
}