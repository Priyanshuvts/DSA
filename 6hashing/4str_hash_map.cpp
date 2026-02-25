#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "enter a string : ";
    cin >> s;
    map<char , int> mpp;
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]] ++;
    }

    int q;
    cout << "enter no of query : ";
    cin >> q;
    while(q --){
        char c;
        cout << "enter any character : ";
        cin >> c;
        cout << "frequency of character is : " << mpp[c] << endl << endl;
    }
    return 0;


    //use unordered_map for better time complexity
}