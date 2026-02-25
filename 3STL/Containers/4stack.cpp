#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;  //there is no indexing in stack
    // stack has only a few imp fn. such as push, pop,top

    //  the value putten last stands on top
    st.push(7); //{7}
    st.push(5); //{5,7}
    st.push(3); //{3,5,7}
    cout << st.top()<< endl;
    st.pop(); //3
    cout << st.size()<< endl;
    cout << st.empty() << endl;   // gives true or false i.e. 1 or 0
    stack <int> st1 , st2;
    st1.swap(st2);
    return 0;
}