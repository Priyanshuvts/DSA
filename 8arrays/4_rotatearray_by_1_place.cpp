#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,3,4,5,6,6,7,8,8,9};
    for(int i = 0 ; i < 11; i ++){
        swap(arr[i], arr[ i + 1]);
    }
    for(auto val : arr){
        cout << val << " ";
    }
    return 0;
}