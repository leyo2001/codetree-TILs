#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt = 1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i>j)
            {
                cout<<"  ";
            }
            else
            {
                cout<<cnt<<" ";
                cnt++;
            }
            
        }
        cout<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}