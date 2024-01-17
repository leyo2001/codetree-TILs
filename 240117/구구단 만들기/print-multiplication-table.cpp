#include <iostream>
using namespace std;
int main() {

int a,b;
cin>>a>>b;


if(b%2==0)
{
    for (int i=1; i<=9; i++)
    {
        for(int j=b; j>=a; j-=2)
        {
            if(j-2<a)
            {
                cout<<j<<" * "<<i<<" = "<<i*j;
                break;
            }
            cout<<j<<" * "<<i<<" = "<<i*j<<" / ";
            
        }
     cout<<endl;
    }
 }
else
{
    for (int i=1; i<=9; i++)
    {
        for(int j=b-1; j>=a; j-=2)
        {
            if(j-2<a)
            {
                cout<<j<<" * "<<i<<" = "<<i*j;
                break;
            }
            cout<<j<<" * "<<i<<" = "<<i*j<<" / ";
            
        }
    cout<<endl;
    }
}

        

    // 여기에 코드를 작성해주세요.
    return 0;
}