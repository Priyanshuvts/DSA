#include <iostream>
using namespace std;

int main() {
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second;
    pair<int, pair<int,int>> r = {1,{2,3}};
    cout << endl <<r.first << endl<<r.second.first<<endl;
    pair<int,int> arr[] = {{1,2},{4,5},{7,9}};
    cout << arr[2].first << "  " << arr[2].second;
    return 0;
}