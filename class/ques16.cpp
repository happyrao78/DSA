#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> :: iterator it = vec.begin();
    *it =10;
    cout<<*it;
    vector<int> :: iterator it2 =  vec.end();
    *it2=20;
    cout<<*it;
    vec.insert(vec.begin() + 1, n-1,3);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}