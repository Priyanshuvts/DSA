#include <iostream>
using namespace std;

int main() {
    int n,t;
    cin >> n;
    int a = 0 , b = 1;
    for(int i =1; i < n+1; i ++){
        cout<<a;
        t = a;
        a = b;
        b = t+b;
    }
}