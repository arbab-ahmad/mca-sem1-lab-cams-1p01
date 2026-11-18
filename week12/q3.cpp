#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float base, height;

public:
    // Constructor
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    // Function to calculate hypotenuse
    float hypo()
    {
        return sqrt(base * base + height * height);
    }

    // Function to calculate area
    float area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Triangle t(3, 4);

    cout << "Hypotenuse = " << t.hypo() << endl;
    cout << "Area = " << t.area() << endl;

    return 0;
}
