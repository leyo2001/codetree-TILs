#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int sum=0;
    double average=0;

    for(int i=1; i<=n;i++)
    {
        int a;
        cin>>a;

        sum+=a;
    }

    average=double(sum)/n;

    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<average;
    // 여기에 코드를 작성해주세요.
    return 0;
}