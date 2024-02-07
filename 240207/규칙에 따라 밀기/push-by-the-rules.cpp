#include <iostream>
#include <string>
using namespace std;
int main() {

    string a,b;
    cin>>a>>b;

    for(int i=0; i<b.length(); i++)
    {
        if(b[i]=='L')
        {
            a=a.substr(1) + a[0];
        }
        else if(b[i] == 'R')
        {
            a=a[a.length()-1] + a.substr(0,a.length()-1);
        }
    }
    cout<<a;

    // 여기에 코드를 작성해주세요.
    return 0;
}