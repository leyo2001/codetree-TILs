#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(n%2==1 && n%3==0)
        {
            cout<<n<<endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}