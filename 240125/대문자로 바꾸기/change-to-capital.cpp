#include <iostream>
using namespace std;
int main() {

    char arr_2d[5][3];

    

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr_2d[i][j];
            arr_2d[i][j] += 'A' - 'a';
            cout<<arr_2d[i][j]<<" ";
        }
        cout<<endl;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}