#include <iostream>
using namespace std;
int main() {

    int a,b;
    cin>>a>>b;
    
    if(b>a)
    {
        for(int i=b; i>=a;i--)
        {
            cout<<i<<" ";
        }
    }

    else
    {
        for(int i=a; i>=b;i--)
        {
            cout<<i<<" ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}