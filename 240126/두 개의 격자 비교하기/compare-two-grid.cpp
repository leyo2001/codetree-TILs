#include <iostream>
using namespace std;
int main() {

    int n,m;

    cin>>n>>m;

    int arr[2][n][m];
    

    for(int i =0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0;k<m;k++)
            {
                cin>>arr[i][j][k];
            }
        }
    }

    int b_arr[n][m];

    for(int j=0; j<n; j++)
    {
        for(int k=0; k<m; k++)
        {
            if(arr[0][j][k] == arr[1][j][k])
            {
                b_arr[j][k] = 0;
            }
            else
            {
                b_arr[j][k] = 1;
            }
        }
    }

    for(int j=0; j<n; j++)
    {
        for(int k=0; k<m; k++)
        {
            
            cout<<b_arr[j][k]<<" ";
        }
        cout<<endl;
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}