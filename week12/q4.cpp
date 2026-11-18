#include <iostream>
using namespace std;

class Counter
{
    static int created;
    static int destroyed;

public:
    Counter()
    {
        created++;
        cout << "Object Created" << endl;
    }

    ~Counter()
    {
        destroyed++;
        cout << "Object Destroyed" << endl;
    }

    static void display()
    {
        cout << "\nTotal Objects Created: " << created << endl;
        cout << "Total Objects Destroyed: " << destroyed << endl;
    }
};

int Counter::created = 0;
int Counter::destroyed = 0;

int main()
{
    cout << "Entering Main Block" << endl;

    Counter obj1, obj2;

    {
        cout << "\nEntering Inner Block" << endl;

        Counter obj3, obj4;

        cout << "\nInside Inner Block:" << endl;
        Counter::display();

    }

    cout << "\nAfter Exiting Inner Block:" << endl;
    Counter::display();

    {
        cout << "\nEntering Another Block" << endl;

        Counter obj5;

    }

    cout << "\nAfter Exiting Another Block:" << endl;
    Counter::display();

    cout << "\nExiting Main Block" << endl;

    return 0;
}
