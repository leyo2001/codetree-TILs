#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    char b;

    cin>>a>>b;

    if(a.find(b) != string::npos)
    {
        cout<<a.find(b);
    }
    else
    {
        cout<<"No";
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}