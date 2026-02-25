#include <iostream>
using namespace std;
int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}
int para_fact(int n, int f = 1){
    if(n < 1) return f;
    f *= n;
    para_fact(n-1 , f);
}
int main() {
    cout << fact(5) << endl;
    cout << para_fact(5);
    return 0;
}
//in functional we return base value in base case
// in parametric we return parameter in base case