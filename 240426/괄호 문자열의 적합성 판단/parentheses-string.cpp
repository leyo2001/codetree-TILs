#include <iostream>
#include<stack>
using namespace std;
int main() {

    string s;
    cin>>s;
    stack<char>a;
    bool flag = true;
    for(int i=0; i<s.length();i++)
    {
        if(s[i]=='(')
        {
            a.push(s[i]);
        }
        else
        {   
            if(a.size()==0)
            {
                cout<<"No"<<endl;
                flag=false;
                break;
            }
            else
            {
                a.pop();
            }
        }
    }
    if(flag)
    {
    if(a.size()==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}