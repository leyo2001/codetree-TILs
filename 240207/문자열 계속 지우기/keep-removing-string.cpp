#include <iostream>
#include <string>
using namespace std;
int main() {

    string a,b;

    cin>>a>>b;

    

    while(a.find(b) != string::npos)
    {
        a.erase(a.find(b),b.length());
    }
    cout<<a;

    // 여기에 코드를 작성해주세요.
    return 0;
}