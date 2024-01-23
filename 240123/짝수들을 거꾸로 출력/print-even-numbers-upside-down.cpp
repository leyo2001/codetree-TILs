#include <iostream>
using namespace std;
int main() {
    int n;
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i] = 1;
    }

    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        if(num%2==0)
        {
            arr[i] = num;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[n-1-i]!=1)
        {
            cout<<arr[n-1-i]<<" ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}