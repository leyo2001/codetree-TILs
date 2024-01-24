#include <iostream>
using namespace std;
int main() {

    int hospital[4]={0,};

    for(int i=0; i<3; i++)
    {
        char cold;
        int hot;

        cin>>cold>>hot;

        if(cold == 'Y' && hot >= 37)
        {
            hospital[0]++;
        }
        else if(cold == 'N' && hot >= 37)
        {
            hospital[1]++;
        }
        else if(cold == 'Y' && hot < 37)
        {
            hospital[2]++;
        }
        else
        {
            hospital[3]++;
        }


    }
    for(int i=0; i<4; i++)
    {
        cout<<hospital[i]<<" ";
    }
    if(hospital[0] >=2 )
    {
        cout<<"E";
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}