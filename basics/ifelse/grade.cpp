#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout << "enter marks:";
    cin >> marks;
    if (marks < 40)
    {
        cout << "F";
    }

    else if (marks <= 59)
    {
        cout << "C";
    }
    else if (marks <= 79)
    {
        cout << "B";
    }
    else if (marks <= 100)
    {
        cout << "A";
    }

    return 0;
}