#include <iostream>
using namespace std;
int sum(int n)
{   
    int sum=0;
    int den =1;
    while(n/den!=0)
    {   
        sum+=n%(den*10)/den;
        den*=10;
    }
    return sum;
}

bool isprime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int cnt =0;
    for(int i=a; i<=b; i++)
    {
        if(isprime(i) && sum(i)%2==0)
        {
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}