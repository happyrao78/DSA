#include <bits/stdc++.h>
using namespace std;
int main()
{
    //:: EUCLIDEAN ALGORITHM :: 
    // GCD(A,B) =  GCD(A%B);
    int a, b;
    cout << "enter a and b: " << endl;
    cin >> a >> b;
    while( a > 0 && b > 0){
        if(a > b){
            a %=b;
        }
        else{
            b %=a;
        }
    }
    if(a==0){
        cout<<"gcd is:"<<b;
    }
    else{
        cout<<"gcd is:"<<a;
    }

    return 0;
}