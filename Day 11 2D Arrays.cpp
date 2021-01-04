/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Day 11: 2D Arrays

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i,j, count = -100000;
    int arr[6][6] {};
    for(i=0; i<6; i++){
        for(j=0; j<6; j++)
        cin>>arr[i][j];
    }
    
    for(i=0; i<6; i++){
        for(j=0; j<6; j++)
        {
            if(i+2<6 && j+2<6){
                int Max_sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            if(Max_sum > count)
              count = Max_sum;
            }
        }
    }
    
    
      
      cout<<count<<endl;
    
    return 0;
}
