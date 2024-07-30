#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    int element;
    cout<<"enter the elements to be inserted: "<<endl;
    for(auto i=0;i<5;i++){
        cin>>element;
        ms.insert(element);
    }
    ms.erase(ms.find(75));
    for(auto it : ms){
        cout<<it<<" "<<endl;
    }
    ms.erase(1);
    for(auto it : ms){
        if(it > 0){
        cout<<it<<" ";
    }
    else{
        cout<<"no elements found in multiset!!"<<endl;
    }
    }
    
    return 0;
}