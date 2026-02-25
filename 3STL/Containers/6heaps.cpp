#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue <int> pq;  //maximum priority heap
    pq.push(2);//{2}
    pq.push(8);//{8,2}
    pq.push(10);//{10,8,2}
    pq.emplace(5);//{10,8,5,2}
    cout << pq.top();
    pq.pop(); //{8,5,2}
    cout << endl << pq.top();


    //Minimum Priority Heap
    priority_queue<int,vector<int>, greater<int>> mh;
    mh.push(2);//{2}
    mh.push(8);//{2,8}
    mh.emplace(10);//{2,8,10}
    mh.push(5);//{2,5,8,10}
    cout <<endl<< mh.top();//27
    mh.pop();//{5,8,10}
    cout << endl << mh.top();



    // Time Complexities
    // push and pop have O(n)
    // top has (O1)
    return 0;
}