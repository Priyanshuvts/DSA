#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(4);
    v.emplace_back(3);


    vector<pair<int,int>> vec;
    vec.push_back({1,3});
    vec.emplace_back(7,9);


    vector<int> ve(5,20); //THIS MEANS : {20,20,20,20,20}
    vector<int> vtr(5); // THIS MEANS : {0,0,0,0,0}



    // TO ACCESS ELEMENTS
    cout<<v[0]<<endl;
        // ITERATORS 
        vector<int> vet = {1,2,3,4,5,6,7,8,9,0};
        vector<int> :: iterator i = vet.begin(); //points to address of element at idx 0
        cout << *i<<endl;
        i += 2;
        cout << *i<<endl;


        vector<int> :: iterator it = vet.end(); //this point to address after the last element
        // to use this first do it--


        vector<int> :: reverse_iterator ite = vet.rend();//reverse end point at address before 0th element
        // to use this  first do ite --???


        vector<int> :: reverse_iterator iter = vet.rbegin();//this points at address of last element


        //using for loop using iterator 
        for(vector<int> :: iterator itera = vet.begin(); itera != vet.end(); itera ++){
            cout << *itera << " ";
        }
        cout << endl;

        // using auto
        for(auto me = vet.begin(); me != vet.end(); me++){  // here me is an iterator
            cout<<*me << " ";
        }
        cout<<endl;
        for(auto val : vet){
            cout << val <<" ";
        }




    //erasing elements in a vector
    //using erase function
    // vet.erase(vet.begin());   //removes first element
    // vet.erase(vet.begin(),vet.end());  //removes all elements
    // vet.erase(vet.begin(),vet.begin() +3); //removes 0th 1st and 2nd element but not the 3rd one





    // inserting elements using insert fn
    vet.insert(vet.begin(),10);//insert 10 at 0th index
    vet.insert(vet.begin()+1,3,27); //insert 3 times 27 after 0th index


        //copying a vector
        vector<int> cpy;
        cpy.insert(cpy.begin(), vet.begin(), vet.end());



    // some other functions

    vector<int> v1 = {2,3};
    vector<int> v2 = {4,7};
    v.pop_back();  //pops last element
    v.size();  //gives size of vector or no of elements
    v.clear(); // clears the vector
    swap(v1,v2); //swaps the elements
    v.empty(); //returns true if vector is empty

    cout << endl << "yaha hai" << endl;
    for(auto val : v1){
        cout << val << " ";
    }
    

    return 0;
}