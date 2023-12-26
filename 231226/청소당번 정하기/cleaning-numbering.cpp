#include <iostream>
using namespace std;
int main() {
    int room=0,floor=0,toilet=0;

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i%12==0)
        {
            toilet++;
        }

        else if(i%3==0)
        {
            floor++;
        }
        
        else if(i%2==0)
        {
            room++;
        }
    }

    cout<<room<<" "<<floor<<" "<<toilet;
    // 여기에 코드를 작성해주세요.
    return 0;
}