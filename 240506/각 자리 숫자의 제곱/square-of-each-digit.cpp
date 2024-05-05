#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int sum(int n)
{   
    int num = n%10;
    if(n==0)
        return 0;
    
    return pow(num,2) + sum(n/10);
}


int main() {
    int N;
    cin>>N; 
    cout<<sum(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}