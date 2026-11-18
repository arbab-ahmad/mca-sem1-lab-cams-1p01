
#include <iostream>
using namespace std;

struct Book
{
    int book_id;
    string title;
    string author;
    float price;
};

void display(Book b)
{
    cout << "\nBook ID: " << b.book_id;
    cout << "\nTitle: " << b.title;
    cout << "\nAuthor: " << b.author;
    cout << "\nPrice: " << b.price;
}

int main()
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.book_id;

    cout << "Enter Title: ";
    cin >> b.title;

    cout << "Enter Author Name: ";
    cin >> b.author;

    cout << "Enter Price: ";
    cin >> b.price;

    display(b);

    return 0;
}

