#include <iostream>
using namespace std;
int main() {

    int n;


    while(cin>>n)
    {
        if(n<25)
        {
            cout<<"Higher"<<endl;
        }

        if(n>25)
        {
            cout<<"Lower"<<endl;
        }

        if(n==25)
        {
            cout<<"Good"<<endl;
            break;
        }



    }
    // 여기에 코드를 작성해주세요.
    return 0;
}