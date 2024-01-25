#include <iostream>
#include <climits>
using namespace std;
int main() {

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<10; i++)
    {   
        int n;
        cin>>n;
        if(n > max && n < 500)
        {
            max = n;
        }
        if(n < min && n > 500)
        {
            min = n;
        }
    }
    cout<<max<<" "<<min;

    // 여기에 코드를 작성해주세요.
    return 0;
}