#include <bits/stdc++.h>
using namespace std;
int arr[6]; // all elements are 0   ==> global declaration
// max size = 10^7
int main() {
    int brr[6]; // all elements have garbage value 
    // max size = 10^6
    
    // contiguous memory allocation 
    // int takes 4 bits; char takes 1 bit; float takes 4 bits; double takes 8 bits;

    for(int i = 0; i < 6; i++){
        cout << "arr : " << arr[i] << " & brr : " << brr[i] << endl;
    }
    return 0;
}