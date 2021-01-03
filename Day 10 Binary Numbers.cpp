
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