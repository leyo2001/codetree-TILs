#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin>>a;

    while(a.length()>1)
    {
        int n;
        cin>>n;

        if(a.length()-1<n)
        {
            a.erase(a.length()-1);
        }
        else
        {
            a.erase(n,1);
        }
        cout<<a<<endl;

    }

    // 여기에 코드를 작성해주세요.
    return 0;
}