#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;

    int cnt =0;

    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cnt++;
            arr[i][j] = cnt;
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}