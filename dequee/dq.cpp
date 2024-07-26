#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    int element;
    int ele;
    int size;
    cout<<"enter the size of dquee:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter the elements:";
        cin>>element;
        dq.push_back(element);
    }
    cout<<"output:"<<endl;
    for(int i=0;i<size;i++){
        cout<<dq[i]<<" ";

    }
    cout<<"enter the element u want to delete:";
    cin>>ele;
    auto it = find(dq.begin(), dq.end(), ele);
    
    if (it != dq.end()) {
        dq.erase(it);
        cout << "Element " << ele << " deleted." << endl;
    } else {
        cout << "Element " << ele << " not found." << endl;
    }
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    

    return 0;
}