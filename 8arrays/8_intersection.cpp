#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 1, 1, 2, 3, 4, 6, 7, 8, 9};
    int brr[] = {1, 1, 3, 4, 5, 7, 8, 11, 23};
    vector <int> inter;
    int n = sizeof(arr)/4 , m = sizeof(brr)/4, i = 0, j = 0;
    while(i < n && j < m){
        if(arr[i] < brr[j]) i ++;
        else if(arr[i] == brr[j]){
            if(inter.empty() || inter.back() != arr[i]){
                inter.push_back(arr[i]);
            }
            i ++;
            j ++;
        }
        else j ++;
    }
    for(auto val : inter){
        cout << val << " ";
    }
    return 0;
}