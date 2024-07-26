#include <iostream>
#include <vector>
using namespace std;
template <class t>
class print
{
public:
    vector<t> arr;
    int size;
    t element;
    int count = 1;

    void input()
    {
        cout << "enter size of vector array: " << endl;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the element " << count << ": " << endl;
            cin >> element;
            arr.push_back(element);
            count++;
        }
    }

    void display_class()
    {

        for (int i = 0; i < arr.size(); i++)
        {

            cout << arr[i] << " ";
        }

        cout << endl;
    }
    // void out(){
    //     arr.pop_back();
    // }
};
template <class t2>
void display(vector<t2> &obj)
{
    cout << "displaying the vector" << endl;
    for (int i = 0; i < obj.size(); i++)
    {
        cout << obj[i] << " ";
    }
    cout << endl;
}
int main()
{
    // print <int> obj;
    // obj.input();
    // // obj.arr.pop_back();
    // obj.display();
    // obj.arr.pop_back();
    //    obj.display_class();
    vector<int> arr;
    int size;
    int element;
    //    { zero size vector
    //     int desired_element;
    //     int times;
    //     int position;
    //     cout<<"enter size of vector array without class: "<<endl;
    //     cin>>size;
    //     int count=1;
    //     for (int i = 0; i < size; i++)
    //     {
    //         cout<<"enter element "<<count<<":"<<endl;
    //         cin>>element;
    //         arr.push_back(element);
    //     }
    //     vector<int>::iterator itr = arr.begin();
    //     cout<<"enter desired element: "<<endl;
    //     cin>>desired_element;
    //     cout<<"enter no. of times you want to add desired element: "<<endl;
    //     cin>>times;
    //     cout<<"enter position:"<<endl;
    //     cin>>position;
    //     arr.insert(itr+position,times,desired_element);
    //     display(arr);

    vector<float> arr2;
    //    display(arr2);
    vector<char> arr3;
    arr3.push_back('h');
    //    display(arr3);
    vector<string> arr4;
    vector<string>::iterator enter = arr4.begin();
    arr4.insert(enter, 4, "inserted happy"); // inserts happy in beginning of  vector array 4 times
    // display(arr4);
    vector<int> arr5(5, 15); // displays the 15 5 times
    // display(arr5);
    vector<int> arr6(arr5);
    // display(arr6);created vector from previous vector
    print<int> obj;
    obj.input();
    obj.display_class();
    

    return 0;
}