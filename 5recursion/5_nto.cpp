#include <iostream>
using namespace std;
void nto(int n){
    if (n < 1) return;
    cout << n << " ";
    nto(n-1);
}
int main() {
    nto(8);
    return 0;
}