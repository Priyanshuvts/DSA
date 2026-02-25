 #include <bits/stdc++.h>
 using namespace std;
 int f(int ct){
   if(ct == 3) return 1 ; //base condition, to prevent infinte recursion 
    cout << ct << " ";
    ct ++;
    f(ct);
 }
 int main() {
    f(0);
    return 0;
 }