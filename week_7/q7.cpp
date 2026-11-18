#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test* set_data(int x)
    {
        this->x = x;
        return this;
    }

    void display()
    {
        cout << "Value of x = " << this << endl;
    }
};

int main()
{
    Test obj;

    obj.set_data(50)->display();

    return 0;
}

