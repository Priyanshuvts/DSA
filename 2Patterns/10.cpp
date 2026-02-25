#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a no. : ";
    cin >> n;
    for(int i = 1; i <= 2 * n - 1; i++){
        if(i <= n){
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
        }
        else{
            for(int j = i;j <= 2 * n - 1; j++){
                cout << "*";
            }
        }
        cout<< endl;
    }
    return 0;
}