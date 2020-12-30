
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    string s;
    cin>>n;
    
    for(i=0;i<n;i++){
      cin>>s;
    
    string even = "", odd = "";
    for (int j = 0; j < s.length(); j++) {
        if (j % 2 == 0)
            even += s[j];
        else
            odd += s[j];
         }
    cout << even << " " << odd << endl;
    
    }
    
    return 0;
}

/*OR*/

  
    while(n--){
      cin>>s;