#include <iostream>
using namespace std;
int main() {

    string a,b;
    cin>>a>>b;

    int cnt =0;

    for(int i=a.length()-1; i>0; i--)
    {
        cnt++;
        string c = "";

        for(int j = i; j<a.length(); j++)
        {
            c += a[j];
        }

        for(int j =0; j<i; j++)
        {
            c += a[j];
        }

        if(c==b)
        {
            cout<<cnt;
            break;
        }
    }

    if(cnt == a.length()-1)
    {
        cout<<-1;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}