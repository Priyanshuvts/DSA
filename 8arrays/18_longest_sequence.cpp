#include <bits/stdc++.h>
using namespace std;
bool linear_search(int arr[] ,int n, int no){
    for(int i = 0; i < n; i ++){
        if(arr[i] == no) return true;
    }
    return false;
}
int main() {
    int arr[]  = {102,4,101,1,100,3,2,1,1,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int ls = 1;
    for(int i = 0; i < n; i++){
        int ct = 0 , no = arr[i];
        for(int j = 0; j < n; j++){
            if(linear_search(arr ,n, no)) {
                ct ++;
                no ++;
            }
        }
        ls = max(ls , ct);
    }
    cout << ls;





    // by sorting;
    vector<int> v = {102,4,101,1,100,3,3,2,2,2,2,1,1,5};
    int sz = v.size();
    sort(v.begin() , v.end());
    int largest_sequence = 1;
    int current_sequence = 1;
    int el = v[0];
    for(int i = 1; i < sz; i++){
        if(v[i] == el) continue;
        else if(v[i] == el + 1){
            current_sequence ++;
            el ++;
            largest_sequence = max(largest_sequence, current_sequence);
        }
        else{
            el = v[i];
            current_sequence = 1;
        }
    }

    cout << endl<< largest_sequence;
    return 0;
}