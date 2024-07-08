#include<iostream>
using namespace std;
template <class basic>
class vector{
    basic num;
    public:
    vector(basic num){
        this->num=num;
        // cout<<num;
    }
    void display(){
        cout<<num<<endl;
    }
};
int main(){
    vector <int> integer_number(895);
    integer_number.display();
    vector <float> float_number(55.268);
    float_number.display();
    vector  <string> char_name("Happy Yadav");
    char_name.display();
    return 0;
}