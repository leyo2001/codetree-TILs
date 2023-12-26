#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=n; i<=100;i++)
    {
        if(i%3==0)
        {
            cout<<i<<" ";
        }

        else if(i%10==3 || i%10==6 || i%10==9)
        {
            cout<<i<<" ";
        }

        else if( (i-(i%10))%10==3 || (i-(i%10))%10==6 || (i-(i%10))%10==9)
        {
            cout<<i<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }    


    // 여기에 코드를 작성해주세요.
    return 0;
}