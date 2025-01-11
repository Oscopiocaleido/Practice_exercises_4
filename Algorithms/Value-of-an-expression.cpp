/*
use cycles to calculate the value of the expression: ∑n i=1(∏i-1 j=1 j^2)
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, aux=1, sum_total=0;

    cout<<"Enter a number: ";cin>>n;

    for(int i=1; i<=n; i++){
        aux=1;
        for(int j=1; j<=i; j++){
           aux *= pow(j,2); 
        }
    sum_total += aux;
    }
    cout<<sum_total;
    return 0;
}