#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1,2,3};
    // same as vector just gives front function
    l.push_back(5);
    l.push_front(4);
    l.pop_back();
    l.pop_front();
    l.emplace_back(7);
    l.emplace_front(5);
    cout<<"success";
    //rest functions are same
    return 0;
}