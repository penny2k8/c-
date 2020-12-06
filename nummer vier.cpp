#include <iostream>
using namespace std;
int main()
{
    int i,t,n;
    for (i=1; i<=100; i++)
    {
        t = 0;
        for (n=1; n<i; n++)
        {
          if (i%n == 0)
            t=t+n;
        }

        if(t==i)
            cout << i <<endl;

    }
}
