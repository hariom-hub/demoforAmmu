#include <iostream>
using namespace std;

class Decrease
{

public:
    int value;

    Decrease()
    {

        value = 10;
    }

    void operator --()
    {
        value--;
    }
    void display()
    {

        cout << "value = " << value;
    }
};

int main()
{

    Decrease dec;
    --dec;
    dec.display();
    return 0;
}