#include <iostream>
using namespace std;

class Greatest
{
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }

    int get_greatest()
    {
        if (a > b)
            return this->a;
        else
            return this->b;
    }
};

int main()
{
    Greatest obj;

    obj.set_data(25, 40);

    cout << "Greatest number = " << obj.get_greatest() << endl;

    return 0;
}

