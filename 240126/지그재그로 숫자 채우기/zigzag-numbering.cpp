#include <iostream>
using namespace std;
int main() {


    int n,m;
    cin>>n>>m;

    int arr[n][m];
    int count=0;
    
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {   
            if(j%2==0)
            {
                arr[i][j] = count;
                count++;
            }
            else
            {
                arr[i][j] =n*(j+2)-1 - count;
                count++;
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