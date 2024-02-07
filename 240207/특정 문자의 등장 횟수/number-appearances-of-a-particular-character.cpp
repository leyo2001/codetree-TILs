#include <iostream>
#include <string>
using namespace std;
int main() {

    int ee_cnt =0;
    int eb_cnt =0;

    string a;
    cin>>a;

    for(int i=0; i<a.length() - 1; i++)
    {
        if(a.substr(i,2) == "ee")
        {
            ee_cnt++;
        }
        if(a.substr(i,2) == "eb")
        {
            eb_cnt++;
        }
    }

    cout<<ee_cnt<<" "<<eb_cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}