#include <iostream>
using namespace std;
int main() {

    int a,b;
    char c;

    while(true)
    {
        cin>>a>>b>>c;

        if(c=='C')
        {
            cout<<a*b;
            break;
        }

        cout<<a*b<<endl;

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}