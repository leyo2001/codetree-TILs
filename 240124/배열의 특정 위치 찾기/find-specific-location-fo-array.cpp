#include <iostream>
using namespace std;
int main() {
    int arr[10];
    double avearge;
    int sum_even =0;
    int sum_thr = 0;
    for(int i=0; i<10; i++)
    {
        int n;
        cin>>n;
        arr[i] = n;
    }

    for(int i=1; i<10; i+=2)
    {
        sum_even += arr[i];
    }

    for(int i=2; i<10; i+=3)
    {
        sum_thr += arr[i];
    }
    avearge = double(sum_thr) / 3.0;

    cout<<fixed;
    cout.pricision(1);
    cout<<sum_even<<" "<<avearge;


    // 여기에 코드를 작성해주세요.
    return 0;
}