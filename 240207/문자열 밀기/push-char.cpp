#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin>>a;

    a = a.substr(1) + a.substr(0,1);
    cout<<a;

    // 여기에 코드를 작성해주세요.
    return 0;
}