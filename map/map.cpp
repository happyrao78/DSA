#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int> marksMap;
    marksMap["Happy Yadav"]=98;
    marksMap["Hishita Gupta"]=95;
    marksMap["bittu yadav"]=88;
    map<string,int>  ::iterator iter;
    for(iter=marksMap.begin();iter != marksMap.end();iter++){
        cout<<(*iter).first<<":"<<(*iter).second<<" "<<endl;
    }


    
    return 0;
}