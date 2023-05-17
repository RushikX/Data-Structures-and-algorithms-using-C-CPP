#include <iostream>
#include <stdio.h>
using namespace std;
int toh(int n,int a,int b,int c)
{
    if(n>0)
    {
        toh(n-1,a,c,b);
        printf("(%d,%d)\n",a,c);
        toh(n-1,b,a,c);
    }
}
int main()
{
    cout<<toh(2,1,2,3);
}