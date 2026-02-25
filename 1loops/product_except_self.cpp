#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1,3,4,5};
    int n = arr.size();
    vector<int> ans(n,1);
    vector<int> pre(n,1); //1,1,3,12
    vector<int> suf(n,1);
    for(int i = 1; i < n; i++){
        pre[i]= arr[i-1] * pre[i-1];
    }
    for(int i = n - 2; i >= 0; i--){
        suf[i]=arr[i+ 1] * suf[i+1];
    }

    for(int i = 0; i < n; i++){
        ans[i] = suf[i] * pre[i];
    }
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<endl;
    }

}