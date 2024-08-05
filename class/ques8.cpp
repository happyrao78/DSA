#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec ={10,20,30,40,50};
    cout<<"subscript :"<<endl;
    for(auto i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl<<"at:"<<endl;
    for(auto i=0;i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }
    return 0;
}