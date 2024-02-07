#include <iostream>
#include <string>
using namespace std;
int main() {

    int n;
    cin>>n;

    string total = "";

    string arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        total +=arr[i];
        
    }

    cout<<total;

    // 여기에 코드를 작성해주세요.
    return 0;
}