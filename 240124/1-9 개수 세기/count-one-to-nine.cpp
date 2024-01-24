#include <iostream>
using namespace std;
int main() {


    int n;
    cin>>n;
    int count_arr[10] = {0,};

    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        count_arr[num]++;
    }

    for(int i=1; i<10; i++)
    {
        cout<<count_arr[i]<<endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}