#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"enter your name: ";
    getline(cin,name);
    cout<<"enter age: ";
    cin>>age;
    if(age>=18){
        cout<<name<<" is eligible to drive";
    }
    else{
        cout<<name<<" is not eligible to drive";
    }
    
    return 0;
}