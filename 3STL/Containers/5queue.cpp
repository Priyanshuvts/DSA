#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q; // element comming first stands in front of the queue
    q.push(4);//{4}
    q.push(7);//{4,7}
    q.emplace(5);//{4,7,5}
    q.back() += 7; //{4,7,12}
    cout << q.back();
    cout << q.front();
    q.pop();//pops the front element
    // swap and size fn is same as stack
    return 0;
}