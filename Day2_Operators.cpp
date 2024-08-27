#include <bits/stdc++.h>

using namespace std;





int main()
{
   float meal_cost,tip_percent,tax_percent,totalcost;
   cin>>meal_cost>>tip_percent>>tax_percent;
   tip_percent=meal_cost*tip_percent/100;
   tax_percent=meal_cost*tax_percent/100;
   totalcost=meal_cost+tip_percent+tax_percent;
   cout<<roundeven(totalcost);
    return 0;
}
