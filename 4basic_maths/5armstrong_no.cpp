#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter a no. : ";
    cin >> n;
    int dup = n ,d = log10(n) + 1;
    double cod;
    while (dup > 0) {
        cod = cod + pow(dup % 10 , d) ;        
        dup /= 10;
    }
    cout << cod;
    return 0;
}