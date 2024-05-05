#include <iostream>
using namespace std;

void print1(int n)
{
    if(n==0)
        return;

    print1(n-1);
    cout<<n<<" ";
}

void print2(int n)
{
    if(n==0)
        return;
    
    cout<<n<<" ";
    print2(n-1);
}


int main() {

    int N;
    cin>>N;

    print1(N);
    cout<<endl;
    print2(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}