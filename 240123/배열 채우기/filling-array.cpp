#include <iostream>
using namespace std;
int main() {
    
    int arr[10];
    int num;

    for(int i=0; i<10; i++)
    {   
        cin >> num;
        
        if(num ==0)
        {
            for(int j=0; j<i; j++)
            {
                cout<< arr[i-1-j]<<" ";
            }
            break;
        }

        arr[i] = num;
        if(i==9)
        {
            for(int j=0; j<10; j++)
            {
                cout<<arr[9-j]<<" ";
            }
        }
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}