#include <iostream>
#include <string>
using namespace std;

int leng(int alphabet_cnt)  //alphabet_cnt가 몇자리 인지 구하는 함수
    {
        int d = 10;
        int d_cnt=1;
        while(true)
        {
            if(alphabet_cnt % d ==alphabet_cnt)
            {
                return d_cnt;
            }
            else
            {
                d*=10;
                d_cnt++;
            }
        }
    }

int main() {

    string a;
    cin>>a;

    int alphabet_cnt =1;
    int length_cnt =0;

    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==a[i+1])
        {
            alphabet_cnt++;
        }
        else
        {   
            length_cnt = length_cnt + 1 + leng(alphabet_cnt);
            alphabet_cnt=1;
        }
    }

    cout<<length_cnt<<endl;
    alphabet_cnt=1;

    for(int i=0; i<a.length(); i++)
    {   
        if(a[i]==a[i+1])
        {
            alphabet_cnt++;
        }
        else
        {
            cout<<a[i]<<alphabet_cnt;
            alphabet_cnt=1;
        }
    }
    return 0;
}