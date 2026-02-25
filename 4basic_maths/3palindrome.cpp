#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, rev = 0 , digit = 0;
    cout << "enter a no. : ";
    cin >> n;
    int x = n;
    while(x > 0){
        digit = x % 10;
        if (rev > INT_MAX / 10) cout << " NP ";
        else rev = rev * 10 + digit;
        x /= 10;
    }
    if (n == rev) cout << "palindrome";
    else cout<< "not a palindrome";
    return 0;
}