#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int k,n;
    cin>>k>>n;

    int arr[k];
    for(int i=0; i<k; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+k);
    cout<<arr[n-1];
    // 여기에 코드를 작성해주세요.
    return 0;
}