#include <iostream>
using namespace std;
int main() {
    char arr[6]= {'L','E','B','R','O','S'};

    int index = -1;

    char a;
    cin>>a;

    for(int i=0; i<6; i++)
    {
        if(arr[i]==a)
        {   
            index = i;

            break;
        }
    }

    
    if(index==-1)
    {
        cout<<"None";
    }
    else
    {
        cout<<index;
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}