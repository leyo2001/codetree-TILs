#include <iostream>
using namespace std;
int main() {
    char arr[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
        if(i==1 || i==4 || i==7)
        {
            cout<<arr[i]<<" ";
        }
    }

    

    // 여기에 코드를 작성해주세요.
    return 0;
}