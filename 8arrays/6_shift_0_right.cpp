#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,0,2,3,0,0,2,0,3} , n = 12, ans[12], j =0;
    for(int i = 0; i < n; i ++){
        if(arr[i] != 0) {
            ans[j] = arr[i];
            j ++;
        }
    }
    for(int i = j; i < n; i ++){
        ans[j] = 0;
        j ++;
    }
    for(auto val : ans){
        cout << val << " ";
    }
    cout << endl;



    // optimal solution
    int brr[] = {1,2,3,4,0,2,3,0,0,2,0,3} , i = 0, k = 1;
    while(k < 12){
        if(brr[i] == 0 && brr[k] != 0){
            swap(brr[i], brr[k]);
            i++;
            k++;
        }
        else if(brr[i] == 0 && brr[k] == 0){
            k++;
        }
        else {
            i ++;
            k ++;
        }
    }
    for(auto val : brr){
        cout << val << " ";
    }
    return 0;
}