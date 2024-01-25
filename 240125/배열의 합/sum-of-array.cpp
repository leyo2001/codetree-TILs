#include <iostream>
using namespace std;
int main() {

    int n;

    for(int i=1; i<=4; i++)
    {   
        int sum=0;
        for(int j=1; j<=4; j++)
        {
            cin>>n;
            sum+=n;
        }
        cout<<sum<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}