#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, pair<string, int>> user = {1, {"Happy Yadav", 7091}};
    // cout<<user.first<<"->"<<user.second.first<<":"<<user.second.second<<endl;//1->Happy yadav:7091
    pair<int, string> arr[] = {{1, "happy"}, {2, "bittu"}, {3, "hishita"}};
    // cout<<arr[0].first<<"->"<<arr[0].second<<endl;//1->happy
    // cout<<arr[2].second;//hishita

    vector<pair<int, int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(1,6);
    // vector<pair<int,int>>::iterator ir;
    // for(ir = vec.begin();ir != vec.end();ir++){
    //     cout<<ir->first<<" "<<ir->second<<endl;
    // }
    int n;
    int count = 1;
    cout << "enter the number  of pairs you want to add:" << endl;
    cin >> n;
    vec.resize(n);

    for (auto &p : vec)
    {
        cout << "enter the pair " << count << ":" << endl;
        cin >> p.first >> p.second;
        count++;
    }
    // using auto keyword
    cout << "Here are all your pairs:" << endl;
    for (auto &p : vec)
    {

        cout << "{" << p.first << "," << p.second << "}" << endl;
    }
    return 0;
}