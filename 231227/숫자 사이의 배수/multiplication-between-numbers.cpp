#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;

    int sum =0;
    int average =0;

    for(int i=a; i<=b; i++)
    {
        sum+=a;
    }

    average=double(sum)/(b-a+1);

    cout<<fixed;
    cout.presicion(1);
    cout<<sum<<" "<<average;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}