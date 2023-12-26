#include <iostream>
using namespace std;
int main() {

    int c1=0,c2=0; 

    for(int i=1;i<=10;i++)
    {
        int a;
        cin>>a;

        if(a%3==0)
        {
            c1++;
        }

        if(a%5==0)
        {
            c2++;
        }

    }    
     cout<<c1<<" "<<c2;

    // 여기에 코드를 작성해주세요.
    return 0;
}