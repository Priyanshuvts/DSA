#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4][4] = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    int n = 4 , m = 4;
    vector<pair<int,int>> idx;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            if(arr[i][j] == 0) idx.emplace_back(i,j);
        }
    }
    for(auto val : idx){
        for(int j = 0; j < m; j++){
           arr[val.first][j] = 0;
        }
         for(int i = 0 ; i < n ; i++){
                arr[i][val.second] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}