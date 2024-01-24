#include <iostream>
using namespace std;
int main() {

    int max;

    for(int i=1; i<=10; i++)
    {
        int n;
        cin>>n;
        if(i==1)
        {
            max = n;
        }
        else if(max<n)
        {
            
            max =n;
        }
        
    }


    cout<<max;

    // 여기에 코드를 작성해주세요.
    return 0;
}