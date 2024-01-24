#include <iostream>
using namespace std;
int main() {


    int n1,n2;
    cin>>n1>>n2;

    int arr_a[n1];    
    int arr_b[n2];
    
    for(int i=0; i<n1; i++)
    {   
        cin>>arr_a[i];
    }

    for(int i=0; i<n2; i++)
    {
        cin>>arr_b[i];
    }


    int cnt;

    for(int i= 0; i<= n1-n2; i++)
    {   
        cnt = 0;

        if(arr_a[i] == arr_b[0])
        {   
            for(int j=0; j<n2; j++)
            {
                if(arr_a[i+j]==arr_b[j])
                {
                    cnt++;
                }
            }
        }

        if(cnt==n2)
        {
            cout<<"Yes";
            break;
        }


        
    }
    if(cnt!=n2)
    {
        cout<<"No";
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}