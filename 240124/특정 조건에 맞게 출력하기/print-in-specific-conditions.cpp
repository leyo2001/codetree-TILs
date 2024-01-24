#include <iostream>
using namespace std;
int main() {

    for(int i=1; ; i++)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            break;
        }

        if(n%2==0)
        {
            cout<<n/2<<" ";
        }
        else
        {
            cout<<n+3<<" ";
        }
    }
    
    

    // 여기에 코드를 작성해주세요.
    return 0;
}