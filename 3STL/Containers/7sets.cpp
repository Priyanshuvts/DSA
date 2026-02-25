#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> s ;  // unique and sorted
    s.insert(5); //{5}
    s.insert(3); //{3,5}
    s.insert(3); //{3,5}
    s.insert(4); //{3,4,5}
    s.insert(1); //{1,3,4,5}
    s.insert(2); // {1,2,3,4,5}
    s.insert(8); // {1,2,3,4,5,8}
    // insert can be used in vector also
    // begin(),end(), rend(),rbegin(),size(),empty(),and swap() are same as above


    auto it = s.find(3); // returns iterator pointing at 3
    cout << *it << endl;
    auto itr = s.find(6); // returns iterator pointing after end or same as end


    int ct = s.count(5);
    cout << ct << endl;

    s.erase(5);  //deletes 5 in log(n) tsc also maintains sorted order
    // can also delete by address
    s.erase(it);
    //{1,2,4,8}
    auto it1 = s.find(2);
    auto it2 = s.find(8);
    s.erase(it1,it2); //deletes [2,4,8) 8 excluded

    auto iter = s.lower_bound(1);
    cout << *iter<< endl;
    auto ite = s.upper_bound(8);
    cout<< *ite;
    return 0;
}