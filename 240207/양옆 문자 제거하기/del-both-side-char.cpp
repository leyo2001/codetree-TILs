#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin>>a;

    a.erase(1,1);
    a.erase(a.length()-2,1);
    cout<<a;

    // 여기에 코드를 작성해주세요.
    return 0;
}