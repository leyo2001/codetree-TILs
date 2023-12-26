#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int sum =0;
    for(int i=1;i<=n;i++)
    {   
        int a;
        cin>>a;
        if(a%2==1 && a%3==0)
        {
            sum+=a;
        }
    }
cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}