
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   double mealcost, tip, tax;
   int tipPercent, taxPercent;
   
   cin>>mealcost;
   cin>>tipPercent;
   cin>>taxPercent;
   
   tip = mealcost*(tipPercent*0.01);
   tax = mealcost*(taxPercent*0.01);
   
   double totalCost = mealcost + tip + tax;
   
   cout<< llround(totalCost)<<endl;
   
    return 0;
}