#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin>>a;
    char t = a[1];

    for(int i=0; i<a.length(); i++)
    {   
        if(a[i] == t)
        {
            a[i] = a[0];
        }
    }

    cout<<a;
    // 여기에 코드를 작성해주세요.
    return 0;
}