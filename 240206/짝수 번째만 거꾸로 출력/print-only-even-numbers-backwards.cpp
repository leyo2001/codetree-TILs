#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;

    cin>>a;

    if(a.length() % 2 ==0)
    {
        for(int i = a.length()-1; i>=0; i-=2)
        {
            cout<<a[i];
        }
    }
    else
    {
        for(int i = a.length()-2; i>=0; i-=2)
        {
            cout<<a[i];
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}