#include <iostream>
using namespace std;
int main() {


    int n;
    cin>>n;

    int arr[n];

    int cnt=0;
    int cnt2=0;


    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
        cnt++;
        if(arr[i]==2)
        {
            cnt2++;
        }
        if(cnt2==3)
        {
            break;
        }
    }

    cout<<cnt;






    // 여기에 코드를 작성해주세요.
    return 0;
}