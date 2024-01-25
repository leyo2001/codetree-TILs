#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }   

    int max=INT_MIN;
    int first;
    int second;
    int num;

    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            num = i;
        }
    }

    first = max;
    max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(i==num)
        {
            continue;
        }
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    second = max;

    cout<<first<<" "<<second;


    // 여기에 코드를 작성해주세요.
    return 0;
}