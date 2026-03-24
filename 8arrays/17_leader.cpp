#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10,22,12,3,0,6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    vector<int> ans;
    for(int i = 0; i < n; i++){
        bool leader = true;
        for(int j = i ; j < n; j++){
            if(arr[i] < arr[j]) {
                leader = false;
            }
        }
        if(leader) ans.push_back(arr[i]);
    }
    for(auto val : ans){
        cout << val << " ";
    }
    cout << endl;



    //OPTIMAL SOLUTION
    int brr[] = {10,22,12,3,0,6};
    int m = sizeof(brr)/ sizeof(brr[0]);
    vector<int> bns;
    bns.push_back(brr[m - 1]);
    int me = brr[m - 1];
    for(int i = m - 2; i >= 0; i --){
        if(brr[i] > me) {
            bns.push_back(brr[i]);
            me = brr[i];
        }
    }
    for(auto val : bns){
        cout << val << " ";
    }






    return 0;
}