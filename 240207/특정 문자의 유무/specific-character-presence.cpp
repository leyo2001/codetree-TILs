#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin>>a;
    bool ee = false;
    bool ab = false;
    for(int i=0; i<a.length()-2; i++)
    {
        if(a.substr(i,2) == "ee")
        {
            ee = true;
        }
        if(a.substr(i,2) == "ab")
        {
            ab = true;
        }
    }

    if(ee == true)
    {
        cout<<"Yes ";
    }
    else
    {
        cout<<"No ";
    }

    if(ab == true)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}