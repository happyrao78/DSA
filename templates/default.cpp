#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>
class sample
{
    public:
    t1 a;
    t2 b;
    t3 c;
    sample(t1 a, t2 b, t2 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void display()
    {
        cout << "value of a:" << a << endl;
        cout << "value of b:" << b << endl;
        cout << "value of c:" << c << endl;
    }
};
int main()
{
    sample <> obj1(1,2.8945,'c');
    obj1.display();
sample <char,float,char> obj2('h',45.2,'x');
    obj2.display();

    return 0;
}