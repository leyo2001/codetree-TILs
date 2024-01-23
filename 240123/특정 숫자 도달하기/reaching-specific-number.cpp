#include <iostream>
using namespace std;
int main() {

    int sum = 0;
    double average;
    int arr[10];
    int num;

    for(int i=0; i<10; i++)
    {
        cin>>num;
        arr[i] = num;
        if(num>=250)
        {   
            for(int j=0; j<i; j++)
            {
                sum = sum + arr[j];
            }
            average = double(sum) / i;
            break;
        }
        
        if(i==9)
        {
            for(int j=0; j<10; j++)
            {
            sum = sum + arr[j];
            }
            average = double(sum) / 10;
        }
        
    
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<average;

    



    // 여기에 코드를 작성해주세요.
    return 0;
}