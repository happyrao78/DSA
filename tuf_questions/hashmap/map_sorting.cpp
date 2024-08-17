#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout << "size:" << endl;
   cin >> n;
   int arr[n];
   map<int, int> mpp;
   for (auto i = 0; i < n; i++)
   {

      cin >> arr[i];
      mpp[arr[i]]++;
   }
   //  for(auto i=0;i<n;i++){
   //     mpp[arr[i]]++;
   //  }
   for (auto it : mpp)
   {
      cout << it.first << " frequency -> " << it.second << endl;
   }
   // fetching
   //  int chances;
   //  cout<<"chances:"<<endl;
   //  cin>>chances;

   //  while(chances--){
   //     int num;
   //     cout<<"number:"<<endl;
   //     cin>>num;
   //     cout<<num<<" frequency is :"<<mpp[num]<<endl;
   //  }

   return 0;
}