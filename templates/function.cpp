#include<iostream>
using namespace std;
template <class t1=string, class t2= int >
void swapp(t1 a,t2 b){
 cout<<"a:"<<a<<"b:"<<b<<endl;
    a = a+b;
    b=a-b;
    a=a-b;
    cout<<"a:"<<a<<"b:"<<b;
}
int main(){
    swapp('a',5);
    return 0;
}