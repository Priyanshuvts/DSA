#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int t = 18;
    int n = sizeof(arr)/4, st = 0 , ed = n - 1;
    bool check = false;
    while(st < ed){
        if(arr[st] + arr[ed] == t){ 
            check = true;
            break;
        }
        else if(arr[st] + arr[ed] < t){
            st ++;
        }
        else ed --;
    }
    cout << check;



    // in case array is not sorted use hashing 
    int brr[] = {1,2,3,4,5,6,7,8,9,9};
    int x = 18;
    int m = sizeof(brr)/4;
    bool check2 = false;
    map<int,int> mpp;
    for(int i = 0; i < m; i ++){
       if(mpp.find(brr[i]) == mpp.end()) mpp[brr[i]] = i;
       else{
        if(2*brr[i] == x) check2 == true;
       }
    }
    for(int i = 0; i < m; i++){
        auto it = mpp.find(x - brr[i]);
        if(it != mpp.end()  && (*it).second != i)
        check2 = true;
    }
    cout << endl<<check2;
    return 0;
}