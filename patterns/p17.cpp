#include <iostream>
using namespace std;
void print(int n)
{
    int space = 2*n - 2;
    for (int i = 1; i <= 2*n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        for (int s = 1; s <=space; s++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }

        cout << endl;
        if (i < n){
            space -= 2;
        }
        else
        {
            space += 2;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}