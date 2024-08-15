#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(auto i=0;i<n;i++){
        cin>>arr[i];
    }
int hashh[13]={0};
for(auto i=0;i<n;i++){
    hashh[arr[i]] +=1;
}
    int total_inputs;
    cout<<"enter total inputs:"<<endl;
    cin>>total_inputs;
    while(total_inputs --){
         number;
        cout<<"enter the numbers to check frequency: ";
        cin>>number;
        cout<<number<<" frequency : "<<hashh[number]<<endl;
        
    }
    
    return 0;
}