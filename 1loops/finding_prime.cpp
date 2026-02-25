#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool prime = true;
    for(int i = 2; i*i <= n; i++){
        if (n%i == 0) {
            prime = false;
            break;
        }
    }
    if (prime == true) cout<<"prime no.";
    else cout<<"not a prime no.";
}