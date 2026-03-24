#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {7,7,7,7,7,7,7,7,7};
    int k = 6, i = 0, j = 0, sum = 0, ms = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    while(j < n){
        sum += arr[j];
        while(sum > k) {
            sum -= arr[i];
            i ++;
        }
        if(sum == k){
            ms = max(j - i + 1, ms);
        }
        j++;
    }
    cout << ms;

    return 0;
}