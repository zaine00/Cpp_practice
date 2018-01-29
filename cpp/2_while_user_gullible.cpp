#include <iostream>
using namespace std;

int main ()
{
    int n1=0, n2=1,g=0;
    while (n1!=n2&&g!=10)
    {
        n2=n1;
        cout <<"Enter any number other than "<< n2 << ":"<< endl;
        cin >> n1;
        cout << endl;
        g++;
    }
    if(g==10)
    {
    cout << "Wow, you're more patient then I am, you win." <<endl;
    }
    else
    {
    cout << "Hey, you were not supposed to enter "<< n2 << "!" <<endl;
    }
    return 0;
}

