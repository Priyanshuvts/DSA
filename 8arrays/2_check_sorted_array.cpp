#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,4,5,6,7};
    bool sorted = true;
    for(int i = 0; i < sizeof(arr)/4 - 1; i++){
        if(arr[i] > arr[i + 1]) sorted = false;
    }
    cout << sorted;
    return 0;
}