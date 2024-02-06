#include <iostream>
#include <string>
using namespace std;
int main() {


    string a;
    cin>>a;

    int b;
    cin>>b;


    for(int i=0; i<b; i++)
    {   
        if(a.length()-1-(b-1)>a.length())
        {
            for(int j=a.length()-1; j>=0; j--)
            {
                cout<<a[j];
            }
            break;
        }
        cout<<a[a.length()-1-i];
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}