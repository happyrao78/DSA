#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> marksMap;
    marksMap["Happy Yadav"]=98;
    marksMap["Hishita Gupta"]=95;
    marksMap["bittu yadav"]=88;
    marksMap.emplace("hitesh",85);
    marksMap.insert({"ronit",77});
    map<string,int>  ::iterator iter;
    for(iter=marksMap.begin();iter != marksMap.end();iter++){
        cout<<(*iter).first<<":"<<(*iter).second<<" "<<endl;
    }
    auto it= marksMap.find("Happy Yadav");
    cout<<"Happy marks are :"<<(*it).second<<endl;
    int cnt = 7;
    int res = __builtin_popcount(cnt);
    cout<<res<<endl;

    string s="5619";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(
        next_permutation(s.begin(),s.end()));
    


    
    return 0;
}