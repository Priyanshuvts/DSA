#include <bits/stdc++.h>
using namespace std;
int prn(vector<int> &v, int st, int ed){
    int pvt = v[st];
    int low = st + 1, high = ed;
    while(true){
        while(low <= high && v[low] <= pvt) low ++;
        while(low <= high && v[high] > pvt) high --;
        if(low > high) break;
        swap(v[low] , v[high]);
    }
    swap(pvt, v[high]);
    return high;
}
void qs(vector<int> &v, int st, int ed){
    if(st >= ed) return;
    int partition = prn(v , st , ed);
    qs(v, st , partition - 1);
    qs(v, partition  + 1, ed);
}
int main() {
    vector <int> v = {3,4,2,7,4};
    qs(v, 0 , v.size() - 1);
    for(auto val : v) cout << val << " ";
    return 0;
    return 0;
}