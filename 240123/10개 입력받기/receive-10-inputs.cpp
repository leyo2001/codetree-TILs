#include <iostream>
using namespace std;
int main() {

    int sum = 0;
    double average;
    int num;

    for(int i=1; i<=10; i++)
    {
        cin>>num;
        if(num==0)
        {
            average = double(sum) / (i-1);
        }
        sum+=num;
        if(i==10)
        {
            average = double(sum) / 10;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<average;

    // 여기에 코드를 작성해주세요.
    return 0;
}