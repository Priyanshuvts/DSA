#include <iostream>
using namespace std;
void otn(int n, int i = 1){
    cout << i << " ";
    if (i == n) return ;
    i ++;
    otn(n , i);
}
int main() {
    int n;
    cout << "enter a no. : ";
    cin >> n;
    otn(n);
    return 0;
}