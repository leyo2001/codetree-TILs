#include <iostream>
using namespace std;
int main() {

    int count_arr[7] ={0,};

    for(int i=0; i<10; i++)
    {
        int num;
        cin>>num;
        count_arr[num]++;
    }
    for(int i=1; i<=6; i++)
    {
        cout<<i<<" - "<<count_arr[i]<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}