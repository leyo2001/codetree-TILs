#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i=2; i<=n; i++)
    {   

        bool isprime = true;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {   
                isprime =false;
                break;
            }
            
        }
        if(isprime == true)
        {
            cout<<i<<" ";
        }
        
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}