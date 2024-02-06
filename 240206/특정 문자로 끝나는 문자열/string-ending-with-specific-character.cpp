#include <iostream>
using namespace std;
int main() {

    string arr[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    char a;
    int cnt=0;

    cin>>a;

    for(int i=0; i<10; i++)
    {
        if(a == arr[i][arr[i].length()-1])
        {
            cout<<arr[i]<<endl;
            cnt++;
        }
    }

    if(cnt==0)
    {
        cout<<"None";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}