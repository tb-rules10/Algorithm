#include <iostream>
using namespace std;
int main()
{
    int a=1,b;
    cin>>b;
    cout<<"factorial of'"<<b<<"' is: ";
    while (b>1)
    {
        a=a*b;
    }
    cout<<a;
    return 0;
}
