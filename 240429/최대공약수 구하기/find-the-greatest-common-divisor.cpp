#include <iostream>
using namespace std;

int a(int n, int m)
{
    int den;
    int min;
    if(n>m)
    {
        min=m;
    } 
    else
    {
        min = n;
    }

    for(int i=1; i<=min;i++)
    {
        if(n%i==0 && m%i==0)
        {
            den = i;
        }
    }
    return den;
}

int main() {

    int n,m;
    cin>>n>>m;
    cout<<a(n,m);
    // 여기에 코드를 작성해주세요.
    return 0;
}