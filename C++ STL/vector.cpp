// STL stand for standerd template library
// there are four type of stl
// 1 container
// 2 Algorith
// 3 Iterator
// 4 Functions

// 1 container -->> vector
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>vec ;
//     vec.push_back(1);
//     vec.push_back(1);
//     vec.push_back(5);
//     vec.push_back(1);
//     vec.push_back(1);
//     cout<<"the value in vector is : "<<endl;
//     for(int x : vec){
//         cout<<x<<endl;
//     }
//     cout<<"size of vector is : "<<endl;
//     cout<<vec.size()<<endl;
//        cout<<"capaity of vector is : "<<endl;
//     cout<<vec.capacity();
//     return 0;
// }

// --> list
// #include<iostream>
// #include<list>
// using namespace std;
// int main()
// {
//     list<int>li;
//     li.push_back(2);
//     li.push_back(8);
//     li.push_back(6);
//     for(int val: li){
//         cout<<val<<" ";
//     }
//     return 0;
// }


// -->Deque
// #include<iostream>
// #include<deque>
// using namespace std;
// int main()
// {
//     deque<int>de;
//     de.push_back(2);
//     de.push_back(8);
//     de.push_back(6);
//     for(int val: de){
//         cout<<val<<" ";
//     }
//     return 0;
// }

// --> pair
#include<iostream>

using namespace std;
int main()
{
    pair<int,int>p = {1,2};

    cout<<p.first<<" "<<endl;
     cout<<p.second<<" ";
    return 0;
}