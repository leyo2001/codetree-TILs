#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    for(int i=n;i<=100;i++)
    {
        if(n>=90)
        {
            cout<<"A"<<" ";
        }
        else if(n>=80)
        {
            cout<<"B"<<" ";
        }
        else if(n>=70)
        {
            cout<<"C"<<" ";
        }
        else if(n>=60)
        {
            cout<<"D"<<" ";
        }
        else
        
        {
            cout<<"F"<<" ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}