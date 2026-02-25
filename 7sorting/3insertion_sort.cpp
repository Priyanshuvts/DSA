#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] ={5,7,9,3,23,45,4};
    int n = sizeof(arr)/4;
    for(int i = 0; i < n ; i++){
        int j = i;
        while(j > 0 && arr[j] < arr[j - 1]){
            swap(arr[j] , arr[j - 1]);
            j --;
        }
    }
    for(auto val : arr) cout << val << " ";
    return 0;
}