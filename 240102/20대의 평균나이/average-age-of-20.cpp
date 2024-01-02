#include <iostream>
using namespace std;
int main() {

    int sum=0;
    int n;
    int counter =0;

    while(cin>>n)
    {   
        if(n>29 || n<20)
        {
            cout<<fixed;
            cout.precision(2);
            cout<<double(sum)/counter<<endl;

            break;
        }

        sum+=n;
        counter++;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}