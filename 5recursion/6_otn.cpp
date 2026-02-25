#include <iostream>
using namespace std;
void otn(int n) {
    if (n < 1) return;
    otn(n-1);
    cout << n << " ";
}
int main() {
    otn(9);
    return 0;
}