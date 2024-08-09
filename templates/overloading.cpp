#include<iostream>
using namespace std;
template <class t>
class sample{
    
    public:
    t data1;
    sample(t data1){
        this->data1=data1;
        display();
    }
    void display();
};
template <class t>
void sample<t>:: display(){
    cout<<data1<<endl;
}
//function overloading
void func(int a){
    cout<<"normal function called value:"<<a<<endl;
}

template <class x>
void func(x a){
    cout<<"Templatised function called value:"<<a<<endl;
}
int main(){
    // sample<int> obj(5);
    // sample<float> obj2(5.152);
    func(5);//high priority of normal func function
    return 0;
}