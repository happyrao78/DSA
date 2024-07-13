#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(5);
    st.insert(4);
    st.insert(10);
    auto id = st.find(10);//iterator
    auto id2 = st.find(5);
    
    // st.erase(id,id2);
    st.lower_bound(5);
    st.upper_bound(10);
    return 0;
}