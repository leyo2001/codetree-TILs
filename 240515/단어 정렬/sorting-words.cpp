#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {

    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}