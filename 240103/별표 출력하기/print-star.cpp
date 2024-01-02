#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int k=n+1; k<=2*n-1; k++)
    {
        for(int q=n-1; q>=1; q--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}