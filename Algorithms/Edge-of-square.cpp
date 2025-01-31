/*
Write an algorithm that prints by screen on the edge of a square with sides of size N. 
For example, if N = 5, the algorithm should print:
XXXXX
X   X
X   X
X   X
XXXXX
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the border size of the square: ";cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
                cout<<"X";

            else
                cout<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}