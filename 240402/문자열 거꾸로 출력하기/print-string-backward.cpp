#include <iostream>
using namespace std;

int main() {

    string a;

    while(cin>>a)
    {
        if(a == "END")
        {
            break;
        }


        for(int i = a.length()-1; i>=0; i--)
        {
            cout<<a[i];
        }
        cout<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}