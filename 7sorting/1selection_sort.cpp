#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {13,1,24,5,32,3};
    int n = sizeof(arr)/4;
    for (int i = 0; i < n - 1 ; i++){
        int mi = i;
        for(int j = i + 1; j < n ; j++){
            if(arr[mi] > arr[j]) mi = j;
        }
        swap(arr[i] , arr[mi]);
    }
    for (auto val : arr) cout << val << " ";
    return 0;
}