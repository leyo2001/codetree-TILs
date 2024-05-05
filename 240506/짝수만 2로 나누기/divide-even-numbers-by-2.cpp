#include <iostream>
using namespace std;
int main() {

    int N;
    cin>>N;
    
    for(int i=0; i<N; i++)
    {
        int n;
        cin>>n;
        if(n%2==0)
            cout<<n/2<<" ";
        else
        cout<<n<<" ";
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}