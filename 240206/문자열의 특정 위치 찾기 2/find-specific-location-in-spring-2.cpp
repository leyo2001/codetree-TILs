#include <iostream>
using namespace std;
int main() {

    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    int cnt = 0;
    char a;
    cin>>a;

    for(int i=0; i<5; i++)
    {
        if(a == arr[i][2] || a == arr[i][3])
        {
            cout<<arr[i]<<endl;
            cnt++;
        }

    }
    cout<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}