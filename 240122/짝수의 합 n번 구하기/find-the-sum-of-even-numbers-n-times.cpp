#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin>>a>>b;
        int sum = 0;
        for(int j=a; j<=b; j++)
        {
            if(j % 2==0)
            {
                sum+=j;
            }
        }
        cout<<sum<<endl;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}