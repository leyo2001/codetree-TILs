#include <iostream>
using namespace std;
int main() {

    int count_arr[10] ={0,};

    for(int i=0; ;i++)
    {
        int num;
        cin >> num;

        if(num==0)
        {
            break;
        }
        int ten_num;
        ten_num = ((num - (num%10))%100)/10;
        count_arr[ten_num]++;
    }    

    for(int i=1; i<=9; i++)
    {
        cout<<i<<" - "<<count_arr[i]<<endl;
    }




    // 여기에 코드를 작성해주세요.
    return 0;
}