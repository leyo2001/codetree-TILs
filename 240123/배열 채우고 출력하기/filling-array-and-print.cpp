#include <iostream>
using namespace std;
int main() {
    char arr[10];
    char a;

    for(int i=0; i<10; i++)
    {
        cin>>a;
        arr[i] = a;
    }

    for(int i=0; i<10; i++)
    {
        cout<<arr[9-i];
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}