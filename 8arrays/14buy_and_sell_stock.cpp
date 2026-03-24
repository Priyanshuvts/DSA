#include <bits/stdc++.h>
using namespace std;

int main() {
    // OPTIMAL SOLUTION
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int bp = arr[0],sp, mp = 0;
    for(int i = 1; i < n; i ++){
        sp = arr[i];
        mp = max(mp , sp - bp);
        if (bp > sp ) bp = sp;
    }
    cout << mp;
    return 0;
}