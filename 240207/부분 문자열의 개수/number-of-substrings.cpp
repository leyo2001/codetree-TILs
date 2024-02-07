#include <iostream>
#include <string>
using namespace std;
int main() {

    string a,b;
    cin>>a>>b;

    int cnt = 0;

    for(int i=0; i<a.length()-b.length()+1; i++)
    {
        if(a.substr(i,b.length()) == b)
        {
            cnt++;
        }
    }
    cout<<cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}