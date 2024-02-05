#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    char b;
    int cnt = 0;
    getline(cin,a);
    cin>>b;

    for(int i=0; i<a.length(); i++)
    {
        if(b == a[i])
        {   
            cnt++;
        }
    }
    cout<<cnt;


    // 여기에 코드를 작성해주세요.
    return 0;
}