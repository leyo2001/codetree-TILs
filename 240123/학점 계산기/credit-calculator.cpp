#include <iostream>
using namespace std;
int main() {
    double sum = 0.0;
    double average;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        double score;
        cin>>score;
        sum += score;
    }

    average = sum / n;

    cout<<fixed;
    cout.precision(1);
    cout<<average<<endl;
    if(average >= 4.0)
    {
        cout<<"Perfect";
    }
    else if(average >= 3.0)
    {
        cout<<"Good";
    }
    else
    {
        cout<<"Poor";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}