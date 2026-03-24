#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,1,1,0,1,2,0,0,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // can apply all the sorting methods as learnt before;
    // BY 3 POINTER APPROACH
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low ++;
            mid ++;
        }
        else if(arr[mid] == 1)mid ++;
        else {
            swap(arr[mid], arr[high]);
            high --;
        }
    }
    for(auto val : arr){
        cout << val << " ";
    }
    return 0;
}