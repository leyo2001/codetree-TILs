#include <iostream>
using namespace std;
int main() {

    int n;
    int counter=0;
    cin>>n;

    whlie(n!=1)
    {
        n/=2;
        counter++;
    }

    cout<<counter;
    // 여기에 코드를 작성해주세요.
    return 0;
}