#include<iostream>
using namespace std;

int main(){
   char c;
   cin>>c;
   int uppercase, lowercase;
   lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    
    if(uppercase||lowercase){
        cout<<"vowel";
    }
    else{
        cout<<"constant";
    }
    return 0;
 }