#include <iostream>
using namespace std;

const int arr1[7] ={1,3,5,7,8,10,12};


bool exist(int M, int D)
{   

    for(int i=0; i<7; i++)
    {
        if(arr1[i]==M)
        {
            if(D<=31)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    if(M==2)
    {
        if(D<=28)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    else if(M<12)
    {
        if(D<=30)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }


}


int main() {

    int M,D;
    cin>>M>>D;
    if(exist(M,D))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}