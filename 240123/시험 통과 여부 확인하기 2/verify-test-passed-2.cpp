#include <iostream>
using namespace std;
int main() {
    int cnt =0;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {   
        double average;
        int sum = 0;
        for(int j=1; j<=4; j++)
        {
            int score;
            cin>>score;

            sum += score;
        }
        average = double(sum) / 4.0;
        if(average >= 60.0)
        {
            cout<<"pass"<<endl;
            cnt++;
        }
        else
        {
            cout<<"fail"<<endl;
            cout<<cnt;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}