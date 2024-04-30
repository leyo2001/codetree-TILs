#include <iostream>
using namespace std;

const int month31[7] = {1,3,5,7,8,10,12};

void season(int M)
{
    if(M<=2 || M==12)
    {
        cout<<"Winter";
    }
    else if(M>2 && M<6)
    {
        cout<<"Spring";
    }
    else if(M>=6 && M<9)
    {
        cout<<"Summer";
    }
    else
    {
        cout<<"Fall";
    }
}

bool isYoon(int Y)
{
    if((Y%4==0&&Y%100==0&&Y%400==0) ||(Y%4==0&&Y%100!=0))
        return true;
    else if(Y%4==0)
        return true;
    else
        return false;
    
}

void result(int Y, int M, int D)
{
    for(int i=0; i<7; i++) //31일인 날들
    {
        if(M==month31[i])
        {
            season(M);
            return;
        }
    }

    if(M==2)    //2월일때
    {
        if(isYoon(Y)) //윤년일때
        {
            if(D<30)
            {
                season(M);
                return;
            }
            else
            {
                cout<<-1;
                return;
            }
        }
        else
        {
            if(D<29)
            {
                season(M);
                return;
            }
            else
            {
                cout<<-1;
                return;
            }
        }
    }
    else //30일인 날들
    {   
        if(D<31)
        {
            season(M);
            return;
        }
        else
        {
            cout<<-1;
            return;
        }
    }
}

int main() {

    int Y,M,D;
    cin>>Y>>M>>D;
    result(Y,M,D);
    // 여기에 코드를 작성해주세요.
    return 0;
}