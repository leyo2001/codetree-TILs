#include <iostream>
using namespace std;
int main() {
    int counter=0;

    for(int i=1; i<=10;i++)
    {
        int a;
        cin>>a;
        if(a%2==1)
        {
            counter++;
        }
    }
    cout<<counter;

    // 여기에 코드를 작성해주세요.
    return 0;
}