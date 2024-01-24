#include <iostream>
using namespace std;
int main() {

    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<=q; i++)
    {
        int quest;
        cin>>quest;

        if(quest == 1)
        {   
            int a;
            cin>>a;
            cout<<arr[a-1]<<endl;
        }

        else if(quest == 2)
        {   
            int a;
            cin>>a;

            int index =0;

            for(int i=0; i<n; i++)
            {
                if(arr[i]==a)
                {
                    index = i+1;
                    break;
                }
            }

            cout<<index<<endl;
            
        }

        else if(quest == 3)
        {
            int a,b;
            cin>>a>>b;

            for(int i=a; i<=b; i++)
            {
                cout<<arr[i-1]<<" ";
            }

            cout<<endl;
        }




    }


    // 여기에 코드를 작성해주세요.
    return 0;
}