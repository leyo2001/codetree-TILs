#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;

    int prod=1;

    for(int i=a; i<=b; i++)
    {
        prod*=i;
    }
    cout<<prod;
    // 여기에 코드를 작성해주세요.
    return 0;
}