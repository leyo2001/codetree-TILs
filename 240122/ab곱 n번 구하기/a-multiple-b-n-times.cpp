#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cin>>n;
    int mul = 1;
    for(int i=1; i<=n; i++)
    {   
        cin>>a>>b;
        for(int j=a; j<=b; j++)
        {
            mul *=j;
        }
        cout<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}