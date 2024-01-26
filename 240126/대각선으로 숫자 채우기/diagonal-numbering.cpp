#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    int count=1;

    int cnt1=0;
    int cnt2=1;
    
    int i=0;
    int j=0;

    while(true)
    {   
    
        arr[i][j] = count;
        count++;

        if(i == n-1 && j == m-1)
        {
            break;
        }

        if((i+1)<n && (j-1)>= 0)
        {
            i++;
            j--;
        }
        else
        {   
            if(cnt1+1<m)
            {
                cnt1++;
                i=0;
                j=cnt1;
            }
            else
            {   
                j=m-1;
                i=cnt2;
                cnt2++;

            }
        }

        

    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}