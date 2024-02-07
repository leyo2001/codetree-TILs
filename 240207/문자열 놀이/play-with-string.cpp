#include <iostream>
#include <string>
using namespace std;
int main() {

    string s;
    int q;
    cin>>s>>q;

    for(int i=0; i<q; i++)
    {
        int n;
        cin>>n;

        if(n==1)
        {
            int a,b;
            cin>>a>>b;
            
            char t;
            t = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = t;

            cout<<s<<endl;
        }
        else if(n==2)
        {
            char a,b;
            cin>>a>>b;

            for(int j=0; j<s.length(); j++)
            {
                if(s[j] == a)
                {
                    s[j] = b;
                }
            }
            cout<<s<<endl;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}