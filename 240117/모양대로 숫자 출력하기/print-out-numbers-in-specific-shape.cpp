#include <iostream>
using namespace std;
int main() {


    int n;
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=n; j>=1; j--)
        {
            if(i<j)
            {
                cout<<"  ";
            }
            else
            {
                cout<<j<<" ";
            }
            
        }
        cout<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}