#include <iostream>
using namespace std;
int nat(int n){
    if(n < 1) return 0;
    cout << n << " ";
    n -- ;
    nat(n);
}
int main() {
    int n;
    cout << "enter a no : " ;
    cin >> n;
    nat(n);
    cout << endl << "priyanshu likes men";
    return 0;
}
