#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    string arr[n];


    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    char a;
    cin>>a;

    int length_sum =0;
    int cnt =0;

    for(int i=0; i<n; i++)
    {
        if(arr[i][0] == a)
        {
            cnt++;
            length_sum += arr[i].length();
        }
    }

    double average;

    average = double(length_sum) / double(cnt);

    cout<<fixed;
    cout.precision(2);
    cout<<cnt<<" "<<average;


    // 여기에 코드를 작성해주세요.
    return 0;
}