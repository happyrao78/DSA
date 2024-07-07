#include<iostream>
using namespace std;
void print(int n){
    int space=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        for(int s=0;s<space;s++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        } 
        space +=2;
        cout<<endl;
    }
     space=2*n-2;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int s=0;s<space;s++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        } 
        space -=2;
        cout<<endl;
    }    
}
int main(){
    int x;
    cin>>x;
    print(x);
    return 0;
}