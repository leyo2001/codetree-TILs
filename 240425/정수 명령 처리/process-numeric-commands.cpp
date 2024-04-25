#include <iostream>
#include<stack>
using namespace std;
int main() {
    stack<int>a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s=="push")
        {
            int x;
            cin>>x;
            a.push(x);
        }
        else if(s=="size")
        {
            cout<<a.size()<<endl;
        }
        else if(s=="empty")
        {
            if(a.empty()==true)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else if(s=="top")
        {
            cout<<a.top()<<endl;
        }
        else if(s=="pop")
        {
            cout<<a.top()<<endl;
            a.pop();
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}