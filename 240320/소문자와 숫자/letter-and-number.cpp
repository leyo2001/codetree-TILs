#include <iostream>
#include <cctype>
using namespace std;
int main() {
    
    string b;

    cin>>b;
    
    for(int i=0; i<b.length(); i++)
    {
        if((b[i]>='A'&&b[i]<'Z')||(b[i]>='a'&&b[i]<='z'))
        {
            cout<<(char)tolower(b[i]);
        }
        if(b[i]>='0'&&b[i]<='9')
        {
            cout<<b[i];
        }
    }
    

    // 여기에 코드를 작성해주세요.
    return 0;
}