#include <iostream>
using namespace std;

int min(int a, int b, int c)
{
    int min = a;
    if(min > b)
    {
        min = b;
    }
    if(min > c)
    {
        min = c;
    }
    return min;
}


int main() {

    int a,b,c;
    cin>>a>>b>>c;

    cout<<min(a,b,c);

    // 여기에 코드를 작성해주세요.
    return 0;
}