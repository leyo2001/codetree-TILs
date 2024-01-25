#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int max = 0;

    for(int i=0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(max < arr[j]-arr[i])
            {
                max = arr[j] - arr[i];
            }
        }
    }
    cout<<max;

    // 여기에 코드를 작성해주세요.
    return 0;
}