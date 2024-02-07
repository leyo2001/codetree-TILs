#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin>>a;

    a[1] = a[a.length()-1-1] = 'a';

    cout<<a;

    // 여기에 코드를 작성해주세요.
    return 0;
}