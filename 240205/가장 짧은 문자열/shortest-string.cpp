#include <iostream>
using namespace std;
int main() {

    string arr[3];
    string lg;
    string sht;

    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }

    lg = arr[0];
    sht = arr[0];


    for(int i=0; i<3; i++)
    {
        if(lg.length()<arr[i].length())
        {
            lg = arr[i];
        }
        if(sht.length()>arr[i].length())
        {
            sht = arr[i];
        }
    }

    cout<<lg.length() - sht.length();


    // 여기에 코드를 작성해주세요.
    return 0;
}