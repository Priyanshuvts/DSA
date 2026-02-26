#include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &v , int st, int mid, int ed){
    vector <int> temp ;
    int l = st, r = mid + 1;
    while(l <= mid && r <= ed){
        if(v[l] < v[r]){
            temp.push_back(v[l]);
            l ++;
        }
        else{
            temp.push_back(v[r]);
            r++;
        }
    }
    while(l <= mid){
        temp.push_back(v[l]);
        l ++;
    }
    while(r <= ed){
        temp.push_back(v[r]);
        r++;
    }
    for(auto val : temp){
        v[st] = val;
        st ++;
    }

}
void ms(vector <int> &v, int st, int ed){
    if (st >= ed) return;
    int mid = (ed + st)/2;
    ms(v , st , mid);
    ms(v , mid + 1, ed);
    merge(v, st , mid , ed);

}
int main() {
    vector<int> v = {3,4,32,5,6,4,89,97,7};
    int n= v.size();
    ms(v,0,n-1);
    for(auto vl: v) cout << vl << " ";
    return 0;
}