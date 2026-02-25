#include<bits/stdc++.h>
using namespace std;
int main() {
    //map stores data in form of key and values
    // i.e. {{1,2},{4,7},{3,5}} // no indexing
    //unique and ordered keys
    map<int,int> m;
    map<int,pair<int,int>> mp;
    map<pair<int,int>,int> mpp;
    

    // ways to insert data
    m[1] = 2; //{{1,2}}
    m.insert({3,2}); //{{1,2},{2,2}}
    m.emplace(2,4); //{{1,2},{2,4},{3,2}}
    cout<<m[3]<<endl;  //prints 4



    mp[1] = {1,3}; //{1,{1,3}}
    mp.insert({2,{8,0}}); //{{1,{1,3}},{2,{8,0}}}
    mp.emplace(3,pair<int,int>(5,7)); //{{1,{1,3}},{2,{8,0}},{3,{5,7}}}
    cout<<mp[3].first<<endl;



    mpp[{1,2}] = 3;//{{{1,2},3}}
    mpp.insert({{1,3},4}); //{{{1,2},3},{{1,3},4}}
    mpp.emplace(pair<int,int>(1,4),5);//{{{1,2},3},{{1,3},4},{{1,4},5}}
    cout << mpp[{1,2}] << endl;


    // Iterator 
    for(auto it : m){ //here it is the pair not iterator
        cout << it.first << " : " << it.second << " ; ";
    }
    cout << endl;
    for(auto it : mp){ //here also it is not iterator
        cout << it.first << " : " << it.second.first << " , " << it.second.second << " ; " ;
    }

    auto it = mp.find(2);
    cout <<endl<< (*it).second.first;


    // erase swap empty size works same as others;




    multimap<int,int> m_m; //analogical with multiset  only ordered
    unordered_map<int,int> um; //analogical with unordered_set only unique
}