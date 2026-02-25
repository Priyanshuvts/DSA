#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter a no. : ";
    // cout << INT_MAX;
    cin >> n;
    if(n <= INT_MIN) cout << "np";
    long long x ;
    if (n < 0) x = -n;
    else x = n;
    long long rev = 0 ,pwr = 1;
    int cpy = x, ct = 0 ;
    while (cpy > 0){
        ct ++;
        cpy /= 10;
    }
    for(int i = 1; i < ct; i++){
        pwr *= 10;
    }
    while (x > 0){
        rev += x%10 * pwr;
        if(rev > INT_MAX ) {
            cout << "np";
        }
        x /= 10;
        pwr /= 10;
    }
    if (n < 0) {
        cout << -rev;
    }
    else {
        cout << rev;
    }
    return 0;
}