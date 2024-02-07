#include <iostream>
#include <string>
using namespace std;
int main() {

    string a, result;

    cin>>a;
    result =a;

    for(int i=0; i<a.length(); i++)
    {
        if(a[i] == a[0])
        {
            result[i] = a[1];
        }
        
    }
    for(int i=0; i<a.length(); i++)
    {
        if(a[i] == a[1])
        {
            result[i] = a[0];
        }
        
    }
    cout<<result;

    // 여기에 코드를 작성해주세요.
    return 0;
}