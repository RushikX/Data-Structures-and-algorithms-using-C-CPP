#include <iostream>
#include <stdio.h>
using namespace std;
int c(int n,int r)
{
    if(n==0 || n==r)
        return 1;
    else
        return c(n,r-1)+c(n-1,r);
}
int main()
{
    cout<<c(9,6);
}