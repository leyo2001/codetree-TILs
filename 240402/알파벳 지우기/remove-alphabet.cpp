#include <iostream>
#include <string>
using namespace std;

int main() {

    string a,b;
    cin>>a>>b;

    string ax ,bx ="";

    for(int i=0; i<a.length(); i++)
    {
        if(a[i]>=48 && a[i] <=57)
        {
            ax += a[i];
        }
        else
        {
            continue;
        }
    }

    for(int i=0; i<b.length(); i++)
    {
        if(b[i]>=48 && b[i] <=57)
        {
            bx += b[i];
        }
        else
        {
            continue;
        }
    }

    cout<<stoi(ax) + stoi(bx);

    // 여기에 코드를 작성해주세요.
    return 0;
}