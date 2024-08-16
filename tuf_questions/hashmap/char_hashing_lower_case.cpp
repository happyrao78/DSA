#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:"<<endl;
    cin>>s;
    //prestore for lowercase only
    int hashh[26]={0};
    for(auto i=0;i<s.size();i++){
        hashh[s[i]-'a']++;
    }
    //fetching the value
    int chance;
    cin>>chance;
    while(chance--){
        char c;
        cout<<"enter the character:"<<endl;
        cin>>c;
        cout<<c<<" character frequency is: "<<hashh[c - 'a']<<endl;
    }
    return 0;
}