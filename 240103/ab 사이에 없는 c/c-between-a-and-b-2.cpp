#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    bool d =false;
    cin>>a>>b>>c;

    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            d=true;
            break;
        }
        
    }

    if(d==true)
    {
        cout<<"NO"<<endl;
    }

    else
    {
        cout<<"YES"<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}