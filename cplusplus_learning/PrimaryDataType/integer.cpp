//program to learning that data types in that these is primary data types there we are learning about int and its data modifiey for int 

#include <iostream>
using namespace std;

int main()
{
    short int a = 6301445260;
    unsigned short int b = -6301445260;
    int c = 6301445260;
    unsigned int d = -6301445260;
    long int e = 6301445260;
    unsigned long int f = -6301445260;
    long long int g = 6301445260;
    unsigned long long int h = -6301445260;

    cout << "Size of data types (in bytes):\n";

    cout << "short int: " << sizeof(a) << endl;
    cout << "unsigned short int: " << sizeof(b) << endl;
    cout << "int: " << sizeof(c) << endl;
    cout << "unsigned int: " << sizeof(d) << endl;
    cout << "long int: " << sizeof(e) << endl;
    cout << "unsigned long int: " << sizeof(f) << endl;
    cout << "long long int: " << sizeof(g) << endl;
    cout << "unsigned long long int: " << sizeof(h) << endl;

    cout << "\nValues:\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;

    return 0;
}

