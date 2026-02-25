#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a no. : ";
    cin >> n;
    for(int i = 1; i <= 2 * n; i++){
        if(i <= n){
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
            for(int j = 1; j <= 2 * n - 2 * i; j++){
                cout << " ";
            }
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
        }
        else {
            for(int j = 1; j <= 2 * n - i; j++){
                cout << "*";
            }
            for(int j = 1; j <= (i - n) * 2; j++){
                cout << " ";
            }
            for(int j = 1; j <= 2 * n - i; j++){
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}