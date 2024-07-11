#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void input(list<int> &lst2){
list<int> :: iterator it2= lst2.begin();
    int element;
    int count=1;
    for(int i = 0;i < 5;i++){
        cout<<"enter element "<<count<<" "<<endl;
        cin>>element;
        count++;
        
        lst2.insert(it2,element);
    }
    
}
int main()
{
    // list 1 i.e zero length list
    list<int> list1;
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(9);
    // display(list1);
    list1.sort();
    // display(list1);

    list1.remove(9);
    // display(list1);

    list1.push_front(6);
    // display(list1);
    list1.reverse();
    // display(list1);
    list<int> list2;
    // list<int> :: iterator itr=list2.begin();
    // input(list2);
    // display(list2);
    list<int> list3(3);
    list<int> :: iterator iter= list3.begin();
    *iter = 45;
    iter++;
    *iter=85;
    iter++;
    *iter=95;
    iter++;
    list3.remove(45);
    // list3.sort();
    list3.push_front(89);
list3.sort();
    display(list3);
    
    

    return 0;
}