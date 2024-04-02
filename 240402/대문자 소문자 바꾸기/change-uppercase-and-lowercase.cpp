#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    getline(cin,s);

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >=65 && s[i] <=90)
        {
            //대문자일때
            s[i] += 97-65;
        }
        else if(s[i] >= 97 && s[i] <=122)
        {
            //소문자일때
            s[i] += -(97-65);
        }
    
    }

    cout<<s;



    // 여기에 코드를 작성해주세요.
    return 0;
}