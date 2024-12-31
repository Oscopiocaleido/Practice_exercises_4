/*
Make an algorithm that determines whether a number is capicuous (palindromic). 
A number is capicuous if it reads the same backwards and forwards.
*/

#include <iostream>

using namespace std;

int main(){
    int n, n_original, n_invertido = 0;
    cout << "Enter a number: ";cin>>n;

    n_original = n;

    while(n>0){
        int digito = n % 10;
        n_invertido = n_invertido * 10 + digito; 
        n /= 10; 
    }

    if(n_original == n_invertido){
        cout << "The number "<<n_original<<" is capicuous."<<endl;
    } else{
        cout << "The number "<<n_original<<" is not capicuous."<<endl;
    }
        
    return 0;
}