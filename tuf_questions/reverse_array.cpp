#include<bits/stdc++.h>
using namespace std;
void reverse_array(int i,int arr[], int n){
    if( i >= n/2) return ;
    swap(arr[i], arr[n-i-1]);
    reverse_array(i+1,arr,n);
}
int main(){
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array:"<<endl;
    for(auto i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"normal array is:"<<endl;
    for(auto i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    reverse_array(0,arr,n);
    cout<<endl<<"reversed array:"<<endl;
    for(auto i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}