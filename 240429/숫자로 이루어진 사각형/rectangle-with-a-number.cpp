#include <iostream>
using namespace std;

void print(int n)
{   
    int cnt=1;
    for(int i=0; i<n; i++)
    {   
        for(int i=0; i<n; i++)
        {
            cout<<cnt<<" ";
            if(cnt==9)
            {
                cnt = 1;
            }
            else
            {
                cnt++;
            }
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    print(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}