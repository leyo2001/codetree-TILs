#include <iostream>
using namespace std;

bool YorN(int n)
{   
    int a = n/10;
    int b = n%10;

    return n%2==0 && (a+b)%5==0;
}

int main() {

    int n;
    cin>>n;

    if(YorN(n))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}