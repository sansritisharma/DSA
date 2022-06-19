#include <iostream>

using namespace std;

int main() {
 int pocket_mny=2000;

   for(int i=1;i<=30;i++){
       if(i%2==0){
           continue;
       }
       
       if(pocket_mny==0){
           break;
       }
       cout<<i<<" "<<"thumbs up"<<endl;
       pocket_mny=pocket_mny-500;
   }

    return 0;
}