#include <iostream>
using namespace std;
int main() {

    char a;
    cin>>a;

    if(a=='z')
    {
        cout<<'a';
    }
    else
    {
        cout<<char(int(a)-1);
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}