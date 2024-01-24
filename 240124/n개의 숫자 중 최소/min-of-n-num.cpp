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

    int min=arr[0];

    for(int i=1; i<n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

    int cnt =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == min)
        {
            cnt++;
        }
    }

    cout<<min<<" "<<cnt;
    

    // 여기에 코드를 작성해주세요.
    return 0;
}