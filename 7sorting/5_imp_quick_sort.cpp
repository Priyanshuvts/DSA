#include <bits/stdc++.h>
using namespace std;
int partition(vector <int> &v, int st, int ed){
    int low = st + 1 , high = ed;
    while(true){
        while(low <= ed - 1 && v[low] <= v[st]) low ++;
        while(high >= st + 1 && v[high] > v[st]) high --;
        if (low > high) break;
        swap(v[low], v[high]);
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
    vector <int> v = {3,4,2,7,4};
    qs(v, 0 , v.size() - 1);
    for(auto val : v) cout << val << " ";
    return 0;
}