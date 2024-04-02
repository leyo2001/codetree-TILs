#include <iostream>
#include <string>
using namespace std;
int main() {

    int a,b;
    cin>>a>>b;

    int sum = a+b;

    string s;
    s= to_string(sum);

    int cnt =0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 49)
        {
            cnt++;
        }
    }
    cout<<cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}