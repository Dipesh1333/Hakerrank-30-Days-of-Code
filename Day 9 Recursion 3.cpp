
#include<bits/stdc++.h>

using namespace std;

  int mul(int n)
  {
      if(n!=1)
      return(n * mul(n-1));
      else
      return n;
      
  }
  
  int main(){
      int nn;
      cin>>nn;
      int total = mul(nn);
      cout<<total<<endl;
      
      return 0;
  }

/*OR*/

#include<bits/stdc++.h>

using namespace std;

  int factorial(int n)
  {
      if(n!=1)
      return(n * factorial(n-1));
      else
      return n;
      
  }
  
  int main(){
      int nn;
      cin>>nn;
      
      cout<<factorial(nn)<<endl;
      
      return 0;
  }
