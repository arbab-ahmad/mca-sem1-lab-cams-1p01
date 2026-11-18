#include <iostream>
using namespace std;

class Flight
{
    int flight_number;
    string source;
    string destination;
    float fare;

public:
    void set_data(int fno, string src, string dest, float f)
    {
        flight_number = fno;
        source = src;
        destination = dest;
        fare = f;
    }

    void display()
    {
        cout << "Flight Number : " << this->flight_number << endl;
        cout << "Source        : " << this->source << endl;
        cout << "Destination   : " << this->destination << endl;
        cout << "Fare          : " << this->fare << endl;
    }
};

int main()
{
    Flight f;

    f.set_data(101, "Delhi", "Mumbai", 5500);

    f.display();

    return 0;
}

