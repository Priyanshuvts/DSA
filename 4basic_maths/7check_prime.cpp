#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , fc = 0;
    cout << "enter a no. : ";
    cin >> n;
    for(int i = 2; i * i <= n; i ++){
        if(n % i == 0) fc ++ ;
    }
    if(n == 1) cout << "nothing";
    else if (fc == 0) cout << "prime";
    else cout << "not prime ";
    return 0;
}