#include<bits/stdc++.h>
using namespace std;
void selection_sort_array(int arr[],int n){
    for(auto i=0;i<=n-2;i++){
        int mini =i;
        int didswap=0;
        for(auto j=i;j<=n-1;j++){
            if(arr[j] < arr[mini]){
                mini = j;
                didswap=1;
            }
           
        }
        if(didswap==0){
            break;
        }
        else{
         int temp = arr[mini];
            arr[mini]= arr[i];
            arr[i]= temp;
        }
            cout<<"runs"<<endl;
    }
}
void bubble_sort_aray(int arr[], int n){
    for(auto i=n-1;i>=1;i--){
        int didswap=0;
        for(auto j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap ==0){
            break;
        }
        // cout<<"runtimes"<<endl;

    }
}
void insertion_sort_array(int arr[],int n){
    for(auto i =0;i<=n-1;i++){
        int j=i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        
        cout<<"runs"<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(auto i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort_array(arr,n);
    // bubble_sort_aray(arr,n);
    // insertion_sort_array(arr,n);
    cout<<"Sorted array:"<<endl;
    for(auto i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}