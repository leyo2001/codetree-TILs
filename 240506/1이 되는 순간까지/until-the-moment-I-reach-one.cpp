#include <iostream>
using namespace std;

int cnt=0;

void oper(int n)
{
    if(n==1)
        return;

    if(n%2==0)
    {
        cnt++;
        oper(n/2);
    }
    else
    {
        cnt++;
        oper(n/3);
    }
}


int main() {
    int N;
    cin>>N;
    oper(N);
    cout<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}