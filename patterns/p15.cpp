#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        // cin>>x;
        for(char ch='H'-i;ch<='H';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    // char x;
    cin>>n;
    print(n);
    return 0;
}