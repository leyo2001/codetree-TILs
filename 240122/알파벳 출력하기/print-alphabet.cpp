#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    char x = 'A';

    for(int i=1;i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<x;
            x++;
            if(x>'Z')
            {
                x = 'A';
            }
        }
        cout<<endl;

    }

    // 여기에 코드를 작성해주세요.
    return 0;
}