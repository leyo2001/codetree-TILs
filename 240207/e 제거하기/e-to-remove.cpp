#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin>>a;

    if(a.find('e')!=string::npos)
    {
        a.erase(a.find('e'),1);
    }
    cout<<a;

    // 여기에 코드를 작성해주세요.
    return 0;
}