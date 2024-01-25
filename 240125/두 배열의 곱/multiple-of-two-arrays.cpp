#include <iostream>
using namespace std;
int main() {
    int arr[2][3][3];
    

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k =0; k<3; k++)
            {
                cin >> arr[i][j][k];
            }
        }
    }

    for(int j=0; j<3; j++)
    {
        for(int k =0; k<3; k++)
        {
            cout<<arr[0][j][k] * arr[1][j][k]<<" ";  
        }
        cout<<endl;
    }
   
        
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}