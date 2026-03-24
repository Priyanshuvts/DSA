#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int brr[] = {5, 11, 12, 13, 15, 16, 17, 18, 19};
    vector <int> uneeon;
    int i = 0, j = 0 ,n1 = sizeof(arr)/4, n2 = sizeof(brr)/4;
    while(i < n1 && j < n2){
        if(arr[i] <= brr[j]){
            if(uneeon.empty() || uneeon.back() != arr[i]){
                uneeon.push_back(arr[i]);
            }
            i ++;
        }
        else{
            if(uneeon.empty() || uneeon.back() != brr[j]){
                uneeon.push_back(brr[j]);
            }
            j ++;
        }
    }
    while(i < n1){
        if(uneeon.empty() || uneeon.back() != arr[i]){
                uneeon.push_back(arr[i]);
        }
        i ++;
    }
    while(j < n2){
        if(uneeon.empty() || uneeon.back() != brr[j]){
                uneeon.push_back(brr[j]);
        }
        j ++;
    }
    for(auto val : uneeon){
        cout << val << " ";
    }
    return 0;
}