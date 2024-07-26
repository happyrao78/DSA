#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
     st.push(3);
    st.push(2);
     st.push(1);
    st.push(0);
    while(!st.empty()){
        cout<<st.top()<<"";
        st.pop();
    }
    // st.pop();
    // cout<<st.size();

    
    return 0;
}