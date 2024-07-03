#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:";
    cin>>age;
    if(age < 18){
        cout<<"no job";
    }
    else if(age <=57){
        cout<<"job eligible";
        if(age == 55){
            cout<<",retirement time";
        }
        else if (age == 56){
            cout<<",retirement on peak";
        }
    }
    else{
        cout<<"retired";
    }
    return 0;
}