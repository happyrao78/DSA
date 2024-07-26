#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
	array<int,5> arr1 = {1,2,3,4,5};
	cout<<"---------------ARRAY-----------------"<<endl;
	
	//functions
	cout<<"Value at 0th element:"<<arr1.at(0)<<endl;
	cout<<"Value at front:"<<arr1.front()<<endl;
	cout<<"Value at back:"<<arr1.back()<<endl;
	cout<<"Size of array:"<<arr1.size()<<endl;
	arr1.fill(0);
	cout<<"Filled array with 0"<<endl;
	cout<<"Is array empty?:"<<arr1.empty()<<endl;
	array<int,5>arr2={6,7,8,9,10};
	swap(arr1,arr2);
	cout<<"Array swapped :"<<endl;
	auto it=arr1.data();
	for(it;it!=arr1.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;

cout<<"---------------VECTOR------------------"<<endl;
// VECTOR
 vector<int> vec1 = {1, 2, 3, 4, 5};
    
    // Functions
    cout << "Value at 0th element: " << vec1.at(0) << endl;
    cout << "Value at front: " << vec1.front() << endl;
    cout << "Value at back: " << vec1.back() << endl;
    cout << "Size of vector: " << vec1.size() << endl;
    vec1.push_back(6);
    cout << "Added 6 to the vector" << endl;
    cout << "New size of vector: " << vec1.size() << endl;
    vec1.pop_back();
    cout << "Removed last element from the vector" << endl;
    cout << "New size of vector: " << vec1.size() << endl;
    vec1.insert(vec1.begin() + 1, 10);
    cout << "Inserted 10 at position 1" << endl;
    vec1.erase(vec1.begin() + 1);
    cout << "Erased element at position 1" << endl;
    vec1.clear();
    cout << "Cleared the vector" << endl;
    cout << "Is vector empty?: " << vec1.empty() << endl;
    vector<int> vec2 = {6, 7, 8, 9, 10};
    swap(vec1, vec2);
    cout << "Vectors swapped:" << endl;
    for(auto it = vec1.begin(); it != vec1.end(); it++){
        cout << *it << " ";
    }
	
	

	
	vector<int>v1(5);
	cout<<"Vector 2 size:"<<v1.size()<<endl;
	cout<<"Input vector 2 elements:";
	for(int i=0;i<v1.size();i++){
		cin>>v1[i];
	}
	v1[0]=0;
	v1.insert(v1.begin() + 1, 10); 
	cout<<"10 inserted at first position in v1"<<endl;
	cout<<"Vector 2 elements: "<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	  cout<<endl<<"NEW"<<endl;
	
	for(auto it =v1.cbegin();it != v1.cend();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	for(auto it =v1.crbegin();it != v1.crend();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	v1.emplace(v1.cbegin()+1,23);
	v1.emplace_back(23);
	v1.assign(2,10);
	cout<<v1.capacity();cout<<endl;
	v1.reserve(20);
	cout<<v1.capacity();cout<<endl;
	v1.shrink_to_fit();
	cout<<v1.capacity();cout<<endl;
	
}