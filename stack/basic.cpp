#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
     st.push(3);
    st.push(2);
     st.push(1);
    st.emplace(0);
    cout<<st.top();
    st.pop();
    cout<<st.size();

    
    return 0;
}