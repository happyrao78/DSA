#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st({1,2,3,4,5,6,7,8,9,10});
    for(auto it1 : st){
        cout<<it1<<" ";
    }
    auto it = st.lower_bound(4);
    auto it2= st.upper_bound(6);
    st.erase(it,it2);
    cout<<endl;
    for(auto it3 :st){
        cout<<it3<<" ";
    }
    return 0;
}