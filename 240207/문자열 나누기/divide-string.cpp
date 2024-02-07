#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;

    string arr[n];
    string total = "";

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
        total += arr[i];
    }

    for(int i=0; i<total.length(); i+=5)
    {   
        if(i+5 > total.length())
        {
            for(int j=total.length() - (total.length() % 5) ; j<total.length(); j++)
            {
                cout<<total[j];
            }
            break;
        }


        cout<<total[i]<<total[i+1]<<total[i+2]<<total[i+3]<<total[i+4]<<endl;
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}