#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,2,2,3,3,3,3,3,4,4,7,7,7};
    vector<int> ans;
    for(int i = 0; i < sizeof(arr) / 4; i ++){
        if(arr[i] != arr[i + 1]) ans.push_back(arr[i]);
    }
    for(auto val : ans){
        cout << val << " ";
    }
    cout << endl;




    // optimal solution
    int brr[] = {1,2,2,2,3,3,3,3,3,4,4,7,7,7};
    int i = 0, j = 1;
    for(j = 1; j < sizeof(brr) / 4; j ++){
        if(brr[i] != brr[j]){
            i++;
            swap(brr[i], brr[j]); 
        }      
    }
    cout << i + 1;
    return 0;
}