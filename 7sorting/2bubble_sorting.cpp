#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5,7,9,3,23,45,4};
    int n = sizeof(arr)/4;
    for(int i = 0 ; i < n - 1 ; i ++){
        int didswap = 0;
        for(int j = 0 ; j < n - i; j++){
            if(arr[j] > arr[j + 1] ) 
            {didswap ++;
            swap(arr[j] , arr[j+ 1]);}
        }
        if (didswap == 0) break;
    }
    for(auto val : arr) cout << val << " ";
    return 0;
}