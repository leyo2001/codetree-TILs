#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    cin>>a;

    
    int alphabet_cnt =1;
    int length_cnt =0;

    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==a[i+1])
        {

        }
        else
        {
            length_cnt +=2;
        }
    }

    cout<<length_cnt<<endl;

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

    // 여기에 코드를 작성해주세요.
    return 0;
}