#include <bits/stdc++.h>
using namespace std;
int partition(vector <int> &v, int st, int ed){
    int low = st + 1 , high = ed;
    while(low <= high){
        while(v[low] <= v[st] && low <= ed - 1) low ++;
        while(v[high] >= v[st] && high >= st + 1) high --;
        if(low < high) swap(v[low], v[high]);
    }
    swap(v[st], v[high]);
    return high;
}
void qs(vector <int> &v, int st, int ed){
    if(st >= ed) return;
    int prn = partition(v,st,ed);
    qs(v,st,prn - 1);
    qs(v,prn + 1,ed);
}
int main() {
    vector <int> v = {5,5,5,5,5,5};
    qs(v, 0 , v.size() - 1);
    for(auto val : v) cout << val << " ";
    return 0;
}