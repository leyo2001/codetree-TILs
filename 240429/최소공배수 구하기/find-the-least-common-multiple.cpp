#include <iostream>
using namespace std;

int d1(int n, int m)
{
    int d = 1;
    int min;
    if(n>m)
    {
        min = m;
    }
    else
    {
        min=n;
    }
    for(int i=0; i<min; i++)
    {
        if(n%d==0&&m%d==0)
        {
            d++;
        }
    }
    return d;
}

int t(int n, int m, int d)
{   
    int cnt =1;
    while(true)
    {
        if((d*cnt)>m && (d*cnt)>n && (d*cnt)%m==0 && (d*cnt)%n==0)
        {
            return d*cnt;
        }
        cnt++;
    }
}


int main() {

    int n,m;
    cin>>n>>m;

    int d = d1(n,m);
    cout<<t(n,m,d);
    // 여기에 코드를 작성해주세요.
    return 0;
}