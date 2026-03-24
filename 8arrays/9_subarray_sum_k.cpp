#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 2, -2, 1};
    int k = 3;
    int n = sizeof(arr)/4;
    int me = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k) me = max(me , j - i + 1);
        }
    }
    cout << me << endl;




    // better
    vector <int> v = {2,2,-2,1};
    int t = 3, sum = 0;
    int sz = v.size();
    int ms = 0;
    map<int, int> mpp;
    for(int i = 0; i< sz; i ++){
        sum += v[i];
        if(sum == k) ms = max(ms , i+1);
        if(mpp.find(sum - k) != mpp.end()){
            ms = max(ms , mpp[sum - k]);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    cout << ms;
    return 0;
}