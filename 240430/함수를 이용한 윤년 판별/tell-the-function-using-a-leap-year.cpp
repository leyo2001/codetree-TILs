#include <iostream>
#include<iomanip>
using namespace std;

bool isYoon(int y)
{
    if(y%100==0 && y%400!=0)
        return false;
    if(y%4==0)
        return true;
    else
        return false;
    
}


int main() {

    int y;
    cin>>y;
    cout<<boolalpha;
    cout<<isYoon(y);
    // 여기에 코드를 작성해주세요.
    return 0;
}