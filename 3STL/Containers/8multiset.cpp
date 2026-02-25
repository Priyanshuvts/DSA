#include <bits/stdc++.h>
using namespace std;

int main() {
    // sorted only
    multiset<int> ms ;
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(3);
    ms.insert(2);

    ms.erase(find(3)); // erases only one occurance of 3
    ms.erase(find(3),find(3)+2); //erases 2 occurances of 3
    ms.erase(3); // erases all 3


    cout << ms.count(2);
    return 0;
}