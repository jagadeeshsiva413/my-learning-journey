//this program is to know about bool and void how it will works 

#include <iostream>
using namespace std;

int main()
{
bool t=257;
bool f=false;
void *ptr;
ptr=&t;
cout<<*(bool*)ptr<<endl;
}
