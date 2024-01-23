#include <iostream>
using namespace std;
int main() {
    int arr[10];

    for(int i=0; i<10; i++)
    {
        int num;
        cin>>num;
        arr[i] = num;
    }

    int sum = 0;
    sum = arr[2] + arr[4] + arr[9];
    cout<<sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}