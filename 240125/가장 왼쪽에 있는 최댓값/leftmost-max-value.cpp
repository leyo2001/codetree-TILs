#include <iostream>
#include <climits>
using namespace std;
int main() {

    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    

    int index=n;
    while(true)
    {
        
        int max = INT_MIN;
        
        for(int i=n-1; i>=0; i--)
        {   
            
            if(i<index && max <= arr[i])
            {
                max = arr[i];
                index = i;
            }
        }
        cout<<index+1<<" ";

        if(index == 0)
        {
            break;
        }
    }

        

       
    // 여기에 코드를 작성해주세요.
    return 0;
}