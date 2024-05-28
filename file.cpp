// #include <iostream>

// using namespace std;

// class hariom
// {

// public:
//     static int total;

// public:
//     hariom()
//     {
//         total = total + 1;
//     }
// };

// int hariom ::total = 0;

// int main()
// {
//     hariom obj1;

//     cout << "\nvalue1 = " << obj1.total;
//     hariom obj2;
//     cout << "\n value2 = " << obj2.total;
//     hariom obj3;
//     cout << "\n value3 = " << obj3.total;

//     return 0;
// }

#include <iostream>
using namespace std;

class Test
{

private:
    int x;

public:
    Test(int x)
    {
        this->x = x;
    }
    Test(int a, int b)
    {

        int sum = a + b;
        cout << "sum = " << sum << "\n";
        cout << "Example of pointer to the object\n";
    }
    void print()
    {
        cout << "value of x = " << x;
    }
};

int main()
{

    Test *obj;
    Test obj2(10,20);
    obj = &obj2;
}