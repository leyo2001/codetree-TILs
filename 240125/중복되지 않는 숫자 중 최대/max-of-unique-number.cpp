#include <iostream>

using namespace std;
int main() {

    int n;
    cin>>n;

    int cnt_arr[1001] = {0,};
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cnt_arr[arr[i]]++;
    }

    int max = -1;

    for(int i=0; i<n; i++)
    {
        if(cnt_arr[arr[i]]==1 && max<arr[i])
        {
            max = arr[i];
        }
    }

    cout<<max;

    // 여기에 코드를 작성해주세요.
    return 0;
}