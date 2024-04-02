#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {

    string s;
    
    getline(cin,s);

    int sum = 0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            sum += int(s[i]) -48;
        }
    }
    cout<<sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}