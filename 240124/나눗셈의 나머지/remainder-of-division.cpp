#include <iostream>
using namespace std;
int main() {

    int count_arr[10]={0,};

    int a,b;
    cin>>a>>b;

    while(true)
    {   
        if(a<=1)
        {
            break;
        }

        count_arr[a%b]++;

        a/=b;
        
    }

    
    
    int sum=0;

    for(int i=0; i<=9; i++)
    {   
        int x;
        x = count_arr[i] * count_arr[i];
        sum+=x;
    }
    cout<<sum;
    


    // 여기에 코드를 작성해주세요.
    return 0;
}