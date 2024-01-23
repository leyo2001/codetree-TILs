#include <iostream>
using namespace std;
int main() {

    double sum = 0.0;
    double average;
    int score;

    for(int i=1; i<=8; i++)
    {
        cin>>score;
        sum+=score;
    }

    average = sum / 8.0;

    cout<<average;





    // 여기에 코드를 작성해주세요.
    return 0;
}