#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    bool b=false;

    for(int i =1; i<=500; i++)
    {
        if(n%i==0)
        {   
            b=true;
            break;
        }

    }

    if(b==true)
    {
        cout<<C;
    }

    else
    {
        cout<<N;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}