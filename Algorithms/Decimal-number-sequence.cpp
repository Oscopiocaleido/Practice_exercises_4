/*
Write an algorithm to read a sequence of digits between 0 and 9 ending in -1 that represent a decimal number and print the decimal number. 
For example, if the input sequence is 5 0 3 8 -1 you must print 5038.
*/

#include <iostream>

using namespace std;

int main(){
    int n, number;

    cout<<"Enter a number: ";cin>>n;

    if((n>=0)&&(n<=9)){
        while(n!=-1){
            if((n>=0)&&(n<=9)){
                number = (n + number) * 10;
  
            }
            cin>>n;
     }
     number /= 10;
     cout<<number;
    }
    return 0;
}