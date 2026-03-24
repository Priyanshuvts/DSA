#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,19,19,12,3,0};
    int m1 = INT_MIN, m2 = INT_MIN;
    for(int i = 0; i < sizeof(arr)/4; i ++){
        if(arr[i] > m1) m1 = arr[i];
    }
    for(int i = 0; i < sizeof(arr)/4; i ++){
        if(arr[i] == m1) continue;
        if(arr[i] > m2) m2 = arr[i];
    }
    cout << m2 << endl;w



    // OPTIMAL SOLUTION
    int brr[] = {1,2,3,4,5,6,7,19,19,12,3,0};
    int M1 = brr[0], M2 = INT_MIN;
    for(int i = 0; i < sizeof(brr)/4; i ++){
        if(brr[i] > M1) {
            M2 = M1;
            M1 = brr[i];
        }
        else if(brr[i] > M2 && brr[i] != M1) M2 = arr[i];
    }
    cout << M2;
    return 0;
}