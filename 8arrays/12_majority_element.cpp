#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mfe = arr[0], fe = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == mfe) fe++;
        else fe--;
        if(fe == 0) {
            mfe = arr[i];
            fe = 1;
        }
    }
    cout << mfe;
    return 0;
}