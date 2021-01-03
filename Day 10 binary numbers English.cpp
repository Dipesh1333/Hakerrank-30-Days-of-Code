/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Day 10: Binary Numbers

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count, max, reminder;
    cin>>n;
    count = 0;
    max = 0;
    reminder = 0;
    
     while(n>=1)
    {
        reminder = n%2 ;
        n=n/2;
        
        if (reminder == 1)
            count++;
        else 
            count = 0;
            
        if (max < count)
            max = count;
        
    }
    cout << max;

    return 0;
}
