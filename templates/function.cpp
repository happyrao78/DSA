#include<iostream>
using namespace std;
template <class t1>
void swapp(t1 a,t1 b){
 cout<<"a:"<<a<<"b:"<<b<<endl;
    a = a+b;
    b=a-b;
    a=a-b;
    cout<<"a:"<<a<<"b:"<<b;
}
int main(){
    swapp('a','x');
    return 0;
}