#include <iostream>
using namespace std;

int main() {

    int n;
    string a;

    cin>>n>>a;

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;

        if(s==a)
        {
            cnt++;
        }
    }
    cout<<cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}