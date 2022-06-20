#include <iostream>
using namespace std;

int main()
{
    int a,b,k,i;
    cin>>a>>b;
    int flag;

    for(i=a+1;i<b;i++){
        flag=1;
        for(k=2;k<=i/2;k++){
            if(i%k==0){
                flag=0;
                break;
                
            }
        }
        if(flag==1){
            cout<<i<<" ";
        }
    }
    return 0;
}