#include <iostream>
using namespace std;
int pn(int n, int ct = 1) {
    if (ct > n) return 0;
    cout << "priyanshu k mishra" << endl;
    ct ++;
    pn(n,ct);
}
int main() {
    int n;
    cout << "enter a no : " ;
    cin >> n;
    pn(n);
    return 0;
}