#include<bits/stdc++.h>
using namespace std;
bool even(int value){
    return (value%2)!=0;
}
int main(){
    list<int> mylist({1,2,3,4,5,6,7,8,9,10});
    list<int> list2({14,12});
    mylist.remove_if(even);
    
    mylist.splice(mylist.begin(),list2);//insert list2 at the beginning of mylist
    for( auto it: mylist){
        cout<<it<<" ";
    }
    return 0;
}