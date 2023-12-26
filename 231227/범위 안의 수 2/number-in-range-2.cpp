#include <iostream>
using namespace std;
int main() {


    int sum=0;
    double average=0;
    int counter=0;

    for(int i=1; i<=10;i++)
    {
        int a;
        cin>>a;

        if(a>=0 && a<=200)
        {
            sum+=a;
            counter++;
        }
    }

    average=double(sum)/counter;

    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<average;


    // 여기에 코드를 작성해주세요.
    return 0;
}