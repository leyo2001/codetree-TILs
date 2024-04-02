#include <iostream>
#include <string>
using namespace std;
int main() {

    string a, b;
    cin>>a>>b;

    string t = a;

    a += b;

    b += t;

    int sum = stoi(a) + stoi(b);

    cout<<sum; 

    // 여기에 코드를 작성해주세요.
    return 0;
}