#include <iostream>
using namespace std;
int main() {

    int n;
    int counter=0;

    while(cin>>n)
    {

        if(counter==3)
        {
            break;
        }


        if(n%2==1)
        {
            continue;
        }

        if(n%2==0)
        {
            cout<<n/2<<end;
            counter++;
        }

        



    }
    // 여기에 코드를 작성해주세요.
    return 0;
}