#include <iostream>
using namespace std;
int main() {

    int cnt =0;
    int n;
    cin>>n;
    for(int i=1; ;i++)
    {   
        if(cnt==2)
        {
            break;
        }
        cout<<n*i<<" ";
        if(n*i%5==0)
        {
            cnt++;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}