
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    
    if(N%2==0)
    {
        if(N>=2 && N<=5)
        {
            printf("Not Weird");	
		}
        else if(N>=6 && N<=20)
        {
        	printf("Weird");
		}
        else
        {
        	printf("Not Weird");
		}    
    }
    else
    {
    	printf("Weird");	
	}
  
    return 0;
}
