#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    cout<<a<<" ";
    for(int i=a;i<=b;)
    {
        if(i%2==1)
        {   cout<<i<<" ";
            i*=2;
            
        }
        else
        {   cout<<i<<" ";
            i+=3;
            
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}