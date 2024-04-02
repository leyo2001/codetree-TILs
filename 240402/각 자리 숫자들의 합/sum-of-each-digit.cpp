#include <iostream>
#include <string>
using namespace std;
int main() {

    int n;
    cin>>n;

    string s = to_string(n);
    
    int sum=0;

    for(int i=0; i<s.length(); i++)
    {
        sum += s[i] - '0';
    }
    cout<<sum;
    

    // 여기에 코드를 작성해주세요.
    return 0;
}