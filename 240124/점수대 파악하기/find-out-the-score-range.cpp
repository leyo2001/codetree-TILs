#include <iostream>
using namespace std;
int main() {
    int count_arr[11] = {0,};

    for(int i=0; ; i++)
    {
        int score;
        cin>>score;

        if(score==0)
        {
            break;
        }
        count_arr[(score/10)]++;

    }

    for(int i=10; i>=1; i--)
    {
        cout<<i*10<<" - "<<count_arr[i]<<endl;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}