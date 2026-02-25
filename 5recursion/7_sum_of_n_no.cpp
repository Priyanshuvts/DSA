#include <iostream>
using namespace std;
int sum(int n){
    if (n == 0) return 0;
    return n + sum(n-1);
}
int para_sum(int n , int sm = 0){
    if (n < 1) return sm;
    sm += n;
    return para_sum(n-1,sm);

}
int main() {
    cout << sum(10) << endl;
    cout << para_sum(10);
    return 0;
}