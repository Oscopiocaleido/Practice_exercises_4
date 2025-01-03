/*
Given a sequence of numbers ending in zero, devise an algorithm to calculate the percentage and sum of odd numbers, 
the percentage and sum of even numbers, and the sum of all numbers, and how many numbers were entered.
*/

#include <iostream>

using namespace std;

int main(){
    int n, count_n_par = 0, count_n_impar = 0, count_total_n = 0, sum_pares = 0, sum_impares = 0, sum_total = 0;
    int porcentaje_n_pares, porcentaje_n_impares;

    cout<<"Enter a number: ";cin>>n;
  
    while(n!=0){
        count_total_n++;
        sum_total += n;
        if(n%2==0){
            count_n_par++;
            sum_pares += n;
        }else{
            count_n_impar++;
            sum_impares += n;
        }
        cin>>n;
    }
    porcentaje_n_pares = (count_n_par * 100) / count_total_n;
    porcentaje_n_impares = (count_n_impar * 100) / count_total_n;

    cout<<"The percentage of odd numbers was "<<porcentaje_n_impares<<"  and the sum of all odd numbers was "<<sum_impares<<endl;
    cout<<"The percentage of even numbers was "<<porcentaje_n_pares<<" and the sum of all even numbers was "<<sum_pares<<endl;
    cout<<"The sum of all the numbers entered is "<<sum_total<<endl;
    cout<<"The total number of numbers entered was "<<count_total_n;
    return 0;
}