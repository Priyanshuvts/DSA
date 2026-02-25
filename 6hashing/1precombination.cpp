#include <bits/stdc++.h>
using namespace std;

int main() {
    int sz;
    cout << "enter size of array : ";
    cin >> sz;
    int arr[sz];
    for (int i = 0; i < sz; i++){
        cout << "enter element no. " << i << " : ";
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        hash[arr[i]] += 1 ;
    }

    int q;
    cout << "enter no of query : ";
    cin >> q;
    while(q != 0){
        int n;
        cout << "enter query : ";
        cin >> n;
        cout << hash[n] << endl;
        q--;
    }
    // we can stor only  10 raised to 6 elements in an array declared inside int main
    // and we can store 10 raised to 7 elements in an array declared globally
    return 0;
}