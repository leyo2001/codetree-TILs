#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    string arr[n];
    int cnt=0;
    int sum =0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum += arr[i].length();
        for(int j=0; j<arr[i].length(); j++)
        {
            if(arr[i][j] == 'a')
            {
                cnt++;
            }
        }
    }

    cout<<sum<<" "<<cnt;


    // 여기에 코드를 작성해주세요.
    return 0;
}