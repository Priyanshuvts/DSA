#include <bits/stdc++.h>
using namespace std;
void swp(int brr[], int n, int i=0){
    if(i >= n/2) return;
    swap(brr[i],brr[n-i-1]);
    swp(brr,n,i+1);
}

void para_swp(int arr[], int ed, int st = 0){
    if(st >= ed) return;
    swap(arr[st], arr[ed]);
    para_swp(arr,ed-1,st+1);
}

int main() {
    int arr[] = {1,2,3,4,9,0};
    para_swp(arr,(sizeof(arr)/4)-1);
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;

    int brr[] = {1,2,3,4,9,8};
    swp(brr,(sizeof(brr)/4));
    for(auto it : brr){
        cout << it << " ";
    }


    return 0;
}