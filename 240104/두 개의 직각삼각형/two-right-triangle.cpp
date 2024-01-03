#include <iostream>
using namespace std;
int main() {

    int n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<"*";
        }


        for(int j=1; j<=2*i-2; j++)
        {
            cout<<" ";
        }



        for(int j=1; j<=n-i+1; j++)
        {
            cout<<"*";
        }



    }

    // 여기에 코드를 작성해주세요.
    return 0;
}