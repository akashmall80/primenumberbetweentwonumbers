//Give all the prime number between two number
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    int i,j;
    for(i=a; i<=b; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}