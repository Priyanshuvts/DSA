#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4][4] = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    int n = 4 , m = 4;
    int row[n] = {0};
    int cln[m] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                cln[j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(row[i]){
            for(int j = 0; j < m; j++){
                arr[i][j] = 0;
            }
        }
    }
    for(int j = 0; j < m; j++){
        if(row[j]){
            for(int i = 0; i < m; i++){
                arr[i][j] = 0;
            }
        }
    }



    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}