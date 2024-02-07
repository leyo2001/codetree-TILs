#include <iostream>
#include <string>
using namespace std;
int main() {

    string a;
    int n;

    cin>>a>>n;

    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        
        if(num==1)
        {
            a=a.substr(1,a.length()-1) + a[0];
            cout<<a<<endl;
        }
        else if(num==2)
        {
            a=a[a.length()-1] + a.substr(0,a.length()-1);
            cout<<a<<endl;
        }
        else if(num==3)
        {   
            string b = "";
            for(int j=a.length()-1; j>=0; j--)
            {
                b = b + a[j];
            }
            a=b;
            cout<<a<<endl;
        }


    }

    // 여기에 코드를 작성해주세요.
    return 0;
}