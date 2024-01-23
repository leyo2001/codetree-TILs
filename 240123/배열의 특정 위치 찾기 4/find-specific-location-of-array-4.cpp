#include <iostream>
using namespace std;
int main() {

    int sum = 0;
    int num, cnt;
    for(int i=1; i<=10; i++)
    {
        cin >> num;
        if(num==0)
        {
            break;
        }
        if(num%2==0)
        {
            sum += num;
            cnt++;
        }
        
    }
    cout<<cnt<<" "<<sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}