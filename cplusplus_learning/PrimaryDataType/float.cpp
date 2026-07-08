//this program is to learn about float and double how the values to be print

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{

float x=3456.123f;
double a=9.123456789;
long double aa=999.12345678L;
cout<<setprecision(7);
cout<<"double a="<<a<<endl;
cout<<"long double aa="<<aa<<endl;
cout<<"float x="<<x<<endl;
cout<<numeric_limits<float>::digits10<<endl;
return 0;
}
