#include <bits/stdc++.h>

using namespace std;





int main()
{
int n;
cin>>n;
if (n%2==1) {
    cout<<"Weird";

}
else
{
    if(n>=2)
    {
        if(n<=5)
        {
            cout<<"Not Weird";
        }
    }
    if(n>=6){
        if(n<=20)
        {
            cout<<"Weird";
        }
    }
    if(n>20)
    {
        cout<<"Not Weird";
    }
}

    return 0;
}

