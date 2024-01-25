#include <iostream>
using namespace std;
int main() {

    int arr_2d[2][4];

    for(int i =0; i<2; i++)
    {   
        
        for(int j=0; j<4; j++)
        {   

            cin>>arr_2d[i][j];
            
        }
    }

    cout<<fixed;
    cout.precision(1);

    for(int i=0; i<2; i++)
    {
        int sum=0;
        for(int j=0; j<4; j++)
        {
            sum += arr_2d[i][j];
        }
        double average;
        average = double(sum) / 4.0;
        cout<<average<<" ";
    }
    cout<<endl;

    for(int j=0; j<4; j++)
    {   
        int sum=0;
        for(int i=0; i<2; i++)
        {
            sum += arr_2d[i][j];
        }
        double average;
        average = double(sum) / 2.0;
        cout<<average<<" ";
    }
    cout<<endl;

    int sum=0;
    for(int i=0; i<2; i++)
    {   
    
        for(int j=0; j<4; j++)
        {
            sum += arr_2d[i][j];
        }
    }
    double average;
    average = double(sum) / 8.0;
    cout<<average;



    // 여기에 코드를 작성해주세요.
    return 0;
}