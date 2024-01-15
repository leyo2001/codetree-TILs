#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int cnt=1;

    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            for(int j=1; j<=n; j++)
            {
            
                cout<<cnt<<" ";
                cnt++;
            }
            cout<<endl;
        }
        else
        {
            for(int j=1; j<=n; j++)
            {
                cout<<cnt+n-1<<" ";
                cnt--;
            }
            cnt=cnt+2*n;
            cout<<endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}