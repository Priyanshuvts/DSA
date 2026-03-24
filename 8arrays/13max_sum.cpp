#include <bits/stdc++.h>
using namespace std;

int main() {
    // BRUTE FORCE :-> make 2 loops and find all possible sums;
    //  OPTIMAL SOLUTION
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ms = INT_MIN, cs = 0;
    int start = -1, end = -1;
    for(int i = 0; i < n; i ++){
        if(cs == 0) start = i;
        cs += arr[i];
        if(cs > ms){
            ms = cs;
            end = i;
        }
        if (cs < 0 ) cs = 0;
    }
    cout << "Starting Index : " << start << endl << "Last Index : " << end << endl;
    cout << ms;
    return 0;
}