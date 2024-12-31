/*
Write an algorithm that reads a number N and calculates and prints the number of digits in N.
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";cin>>n;

    cout<<"N has: "<<endl;

    while(n!=0){
        n/=10;
        int count;
        count++;
        cout<<count<<endl;

    }
    cout<<"digits."<<endl;
    return 0;
}  