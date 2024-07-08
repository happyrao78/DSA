#include<iostream>
using namespace std;
template <class dot>
class vector{
    public:
 dot *arr;
 int size;

 vector(int m){
    size =  m;
    arr =  new dot[size];
 }
 dot dotProduct(vector &v){
    dot d=0;
    for (size_t i = 0; i < size; i++)
    {
        d += this->arr[i] * v.arr[i];
    }
    return d;
 }
 
};
int main(){
    // vector<int> first(3);
    // first.arr[0]=1;
    // first.arr[1]=1;
    // first.arr[2]=1;
    //     vector<int> second(3);
    // second.arr[0]=2;
    // second.arr[1]=2;
    // second.arr[2]=2;
     vector<float> first(3);
    first.arr[0]=1.1;
    first.arr[1]=1.2;
    first.arr[2]=1.3;
        vector<float> second(3);
    second.arr[0]=2.1;
    second.arr[1]=2.2;
    second.arr[2]=2.3;
    float product = first.dotProduct(second);
    cout<<product;

    return 0;
}