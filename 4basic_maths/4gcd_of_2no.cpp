#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,gcd;
    cout << "enter no. : ";
    cin >> n ;
    cout << "enter one more no. : ";
    cin >> m;
    for(int i = 1; i <= min(m , n) ; i ++){
        if (m % i == 0 && n % i == 0) gcd = i;
    }
    cout << gcd << endl;



    //method 2
    int a , b;
    a = m;
    b = n;
    while (true){
        if (a > b) a = a % b;
        else b = b % a;
        if(a == 0) {
            cout << "gcd is : " << b;
            break;
        }
        if(b == 0) {
            cout << "gcd is : " << a;
            break;
        }   
    }
    return 0;
}