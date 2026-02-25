#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,4,5,3,3,4,4,3,2,2};
    map<int,int> mpp ;
    for(int i = 0; i < sizeof(arr)/4; i++ ){
        mpp[arr[i]] ++;
    }


    int q;
    cout << "enter no of query : ";
    cin >> q;
    while(q --){
        int n;
        cout << "enter a no. : ";
        cin >> n;
        cout << "freq of no. is : " << mpp[n] << endl << endl;
    }
    return 0;
}