// #include<iostream>
// using namespace std;  
// int main(){
//     char str[10];
//     cout<<"Enter your char array:"<<endl;
//     cin.getline(str,50);
//     cout<<str<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str = "md ";
//     string str1 = "islam";
//     string str2 = str+str1;
//     cout<<"your stirng is : "<<str2<<endl;
//     cout<<str.size();
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string st = "md islam hellow @ %";
    reverse(st.begin() , st.end());
    cout<<st<<endl;
}
