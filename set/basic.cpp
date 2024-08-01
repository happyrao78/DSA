#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(5);
    st.insert(4);
    st.insert(10);
    for(auto it : st){
        cout<<it<<" ";
    }
    
    // st.erase(id,id2);
    
    return 0;
}