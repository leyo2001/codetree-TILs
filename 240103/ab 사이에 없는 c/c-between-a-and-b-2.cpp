#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    bool d =true;
    cin>>a>>b>>c;

    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            d=false;
            break;
        }
        
    }

    if(d==false)
    {
        cout<<"Yes"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}