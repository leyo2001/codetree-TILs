#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int counter=0;
    for(int i =1; ; i++)
    {
        counter++;
        n/=i;
        if(n<=1)
        {
            cout<<counter;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}