#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter a no. : ";
    cin >> n;
    int x = n;
    int ct = 0;
    while (n > 0){
        ct ++;
        n /= 10;
    }
    cout << ct << endl;



    // method 2
    int count = log10(x) + 1;
    cout << count ;
    return 0;
}