#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:"<<endl;
    cin>>s;
    //prestoring the characters all including symbols, lower and uppercase
    int hassh[256]={0};
    for(auto i=0;i<s.size();i++){
        hassh[s[i]]++;
    }
    //fetching the values
    int chances;
    cout<<"enter the number of chances :"<<endl;
    cin>>chances;
    while(chances--){
        char c;
        cout<<"enter the character:"<<endl;
        cin>>c;
        cout<<c<<" frequency is : "<<hassh[c]<<endl;
    }


    return 0;
}