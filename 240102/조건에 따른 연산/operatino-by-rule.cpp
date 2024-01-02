#include <iostream>
using namespace std;
int main() {
    int n;
    int cnt=0;
    cin>>n;

    while(n<1000)
    {
        if(n%2==0)
        {
            n=3*n+1;
            cnt++;
            
        }

        else
        {
            n=2*n+2;
            cnt++;
            
        }
    }

    cout<<cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}