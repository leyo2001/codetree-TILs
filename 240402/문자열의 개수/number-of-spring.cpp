#include <iostream>
using namespace std;


int main() {

    string s;
    string arr[200];

    int cnt = 0;

    while(cin>>s)
    {
        if(s=="0")
        {
            break;
        }
        
        arr[cnt] = s;
        cnt++;
    }


    cout<<cnt<<endl;
    for(int i=0; i<cnt; i+=2)
    {
        cout<<arr[i]<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}