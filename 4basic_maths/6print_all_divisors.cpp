#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "enter a no. : ";
    cin >> n;
    vector <int> ve;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0) {
            ve.emplace_back(i);
            if(n / i != i){
                ve.emplace_back(n / i);
            }
        }
    }
    sort(ve.begin(), ve.end());
    for(auto val : ve) cout << val << " ";
    return 0;
}