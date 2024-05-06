#include <iostream>
using namespace std;

int fun(int k){
    if(k==0)
        return 0;
    
    return k%10 + fun(k/10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int p = 1;
    for(int i=0; i<3; i++)
    {
        int n;
        cin>>n;
        p *= n;
    }
    cout<<fun(p);
    return 0;
}