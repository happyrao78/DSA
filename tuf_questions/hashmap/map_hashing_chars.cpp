#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:"<<endl;
    cin>>s;
    unordered_map<char,int> mpp;// same as ordered map but it has 0(1) TC in most cases
    //prestoring
    for(auto i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    //fetching
    int chances;
    cout<<"chances: "<<endl;
    cin>>chances;
    while(chances--){
        char c;
        cout<<"enter the characters:"<<endl;
        cin>>c;
        cout<<c<<" frequency is : "<<mpp[c]<<endl;

    }
    return 0;
}