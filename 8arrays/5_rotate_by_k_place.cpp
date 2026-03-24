#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int k = 4;
    int temp[4];
    for(int i = 0; i < k; i ++){
        temp[i] = arr[i];
    }
    for(int i = 0; i + k < 6; i++){
        swap(arr[i + k], arr[i]);
    }
    for(int i = 0; i < k; i ++){
        arr[6 - 4 + i] = temp[i];
    }
    for (auto val : arr){
        cout << val << " ";
    }
    return 0;
}