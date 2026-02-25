#include <bits/stdc++.h>
using namespace std;
bool pal_check(string &s, int i = 0){
    int n = s.size();
    if(i >= n/2 )return true;
    if(s[i] != s[n-i-1]) return false;
    pal_check(s, i + 1);
}
int main() {
    string  s;
    cout << "write sentence : ";
    getline(cin , s);
    cout << pal_check(s);
    return 0;
}