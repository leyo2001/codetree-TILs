#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[100] = {1,n};

    int num;

    for(int i =2; ; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        if(arr[i]>100)
        {   
            num = i;
            break;
        }
    }

    for(int i=0; i<num+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    



    // 여기에 코드를 작성해주세요.
    return 0;
}