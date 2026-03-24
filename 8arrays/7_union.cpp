#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int brr[] = {5, 11, 12, 13, 15, 16, 17, 18, 19};
    set <int> st ;
    int n =sizeof(arr)/4 , m = sizeof(brr)/4;
    for(int i = 0; i < n; i ++){
        st.insert(arr[i]);
    }
    for(int i = 0; i < m; i ++){
        st.insert(brr[i]);
    }
    int ans[st.size()];
    int i = 0;
    for(auto val : st){
        ans[i] = val;
        cout << ans[i] << " ";
        i ++;
    }
    return 0;
}