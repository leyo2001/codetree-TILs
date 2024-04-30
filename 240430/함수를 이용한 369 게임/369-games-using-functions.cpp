#include <iostream>
using namespace std;


bool num369(int i)
{   
    int den =1;
    while(i/den!=0)
    {   
        int a = i%(den*10);
        if(a/den == 3 || a/den == 6 || a/den == 9)
        {
            return true;
        }

        den*=10;
    }
    return false;
}

int count(int a, int b)
{
    int cnt = 0;

    for(int i=a; i<=b; i++)
    {
        if(i%3==0 || num369(i))
        {
            cnt++;
        }
    }
    return cnt;
}

int main() {

    int a,b;
    cin>>a>>b;

    cout<<count(a,b);
    // 여기에 코드를 작성해주세요.
    return 0;
}