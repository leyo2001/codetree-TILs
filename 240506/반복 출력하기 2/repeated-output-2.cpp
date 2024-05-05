#include <iostream>
using namespace std;

void print(int n)
{
    if(n==0)
        return;

    print(n-1);
    cout<<"HelloWorld"<<endl;
}

int main() {
    int N;
    cin>>N;

    print(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}