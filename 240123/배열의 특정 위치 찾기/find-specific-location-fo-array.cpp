#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum = 0;
    int cnt = 0;
    double average;
    for(int i =0; i<10; i++)
    {
        int n;
        cin>>n;
        arr[i] = n;
    }

    for(int i =1 ; i<=9; i+=2)
    {
        sum += arr[i];
        cnt++;
    }
    for(int i =2 ; i<9; i+=3)
    {
        sum += arr[i];
        cnt++;
    }

    average = double(sum) / cnt;
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<average;



    // 여기에 코드를 작성해주세요.
    return 0;
}