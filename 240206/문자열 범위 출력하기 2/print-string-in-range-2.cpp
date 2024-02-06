#include <iostream>
#include <string>
using namespace std;
int main() {


    string a;
    cin>>a;

    int b;
    cin>>b;


    for(int i=0; i<b; i++)
    {
        cout<<a[a.length()-1-i];
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}