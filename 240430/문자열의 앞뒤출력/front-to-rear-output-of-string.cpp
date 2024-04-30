#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    cin>>s;
    cout<<s.substr(0,3)<<endl;
    cout<<s.substr(s.length()-4,4);
    // 여기에 코드를 작성해주세요.
    return 0;
}