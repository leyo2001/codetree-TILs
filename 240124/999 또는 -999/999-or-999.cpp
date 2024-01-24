#include <iostream>
using namespace std;
int main() {


    int min,max;
    
    for(int i=0;;i++)
    {
        int n;
        cin>>n;
        if(n==999 || n==-999)
        {
            break;
        }
        if(i==0)
        {
            max = min = n;
        }
        else 
        {
            if(max<n)
            {
                max=n;
            }
            if(min>n)
            {
                min = n;
            }
        }

    }
    cout<<max<<" "<<min;

    // 여기에 코드를 작성해주세요.
    return 0;
}