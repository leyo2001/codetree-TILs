#include <iostream>
#include<algorithm>
#include<functional>
using namespace std;

bool com(int a, int b)
{
    return a>=b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+5);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+5,greater<int>());

    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}