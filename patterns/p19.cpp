#include<iostream>
using namespace std;
void  print(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int bottom= (2*n-2)-i;
            int left=j;
            int right=  (2*n-2)-j;
            cout<<(n- min(min(top,bottom),min(left,right)))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}