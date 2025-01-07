/*
Write an algorithm that takes as input a number N and prints the Fibonacci sequence up to N. 
The Fibonacci sequence starts with the numbers 0 and 1 and is calculated at each step by adding the last two numbers of the sequence. 
For example, the first numbers of the Fibonacci sequence are 0, 1, 1, 2, 3, 5, 8, 13, ...
*/

#include <iostream>

using namespace std;

int main(){
    int n, limit, aux, d1=0, d2=1;

    cout<<"Enter a number: ";cin>>n;
    cout<<endl;

    limit = n;

    cout<<d1<<endl;
    cout<<d2<<endl;

    while(aux<limit){
        aux= d1 + d2;
        cout<<aux<<endl;
        d1 = d2;
        d2 = aux;
    }
    return 0;
}