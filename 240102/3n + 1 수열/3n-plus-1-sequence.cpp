#include <iostream>
using namespace std;
int main() {

    int n;
    int counter =0;

    
        cin>>n;

    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            counter++;
        }
        
        else
        {
            n=3*n+1;
            counter++;
        }
    }
    cout<<counter;


 

    // 여기에 코드를 작성해주세요.
    return 0;
}