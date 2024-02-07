#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {

    string a;
    getline(cin,a);

    for(int i=0; i<a.length(); i++)
    {
        if(isalpha(a[i]) != 0)
        {
            if(isupper(a[i]) != 0)
            {
                cout<<char(a[i]);
            }
            else
            {
                cout<<char(toupper(a[i]));
            }
        }
    }

    

    // 여기에 코드를 작성해주세요.
    return 0;
}