#include <iostream>
using namespace std;

int max=0;

void fun(int k,int cnt)
{  
    if(cnt==k)
    return;

    cnt++;
    int n;
    cin>>n;
    if(::max<n)
        ::max=n;
    fun(k,cnt);

}

int main() {
    int n;
    cin>>n;
    fun(n,0);
    cout<<::max<<endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}