#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==1)
        return 1;

    return n + sum(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;
    cout<<sum(N);
    return 0;
}