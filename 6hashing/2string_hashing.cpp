#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "enter a string : ";
    cin >> s;
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i]- 'a'] ++;
    }
    int q;
    cout << "enter no of query : ";
    cin >> q;
    while(q --){
        char c;
        cout << "enter a character : ";
        cin >> c;
        cout << "freq of char is : " << hash[c - 'a'] << endl;
    }



    // in order to find freq of any symbol just remove - 'a' and make size of hash 256
    return 0;
}