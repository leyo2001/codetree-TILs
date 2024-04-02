#include <iostream>
#include <string>
using namespace std;
int main() {

    int n;
    cin>>n;
    int sum=0;

    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        sum += num;
    }

    string s = to_string(sum);

    for(int i=1; i<s.length(); i++)
    {
        cout<<s[i];
    }
    cout<<s[0];
    // 여기에 코드를 작성해주세요.
    return 0;
}