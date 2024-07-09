#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int j;
    cout<<"Input enter side:"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
     for(j=1;j<=n;j++)
     {
        cout<<"*";
     }
     cout<<"\n";
    } 
}