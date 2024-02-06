#include <iostream>
using namespace std;
int main() {

    string arr[10];
    int sum=0;

    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
        sum += arr[i].length();
    }

    cout<<sum;

    

    // 여기에 코드를 작성해주세요.
    return 0;
}