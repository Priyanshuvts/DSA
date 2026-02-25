#include <bits/stdc++.h>
using namespace std;
void ms(int arr[], int st , int ed){
    if(st >= ed) return;
    int mid = ed + (st - ed)/2;
    ms(arr,st,mid);
    ms(arr,mid + 1, ed);
}
int main() {
    int arr[] = {3,2,4,1,3};
    int n = sizeof(arr)/4;
    
    return 0;
}