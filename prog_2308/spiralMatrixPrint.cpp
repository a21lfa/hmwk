#include<stdio.h>
#include<iostream.h>
int a[10][10],n,m;
void f(int a[10][10],int m,int n)
		 {int i,j,p,q,k=0;
cout<<"m,n"<<endl;
cin>>m>>n;
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
    {cout<<"a["<<i<<"]["<<j<<"]=";
    cin>>a[i][j];
    }

p=m;
q=n;
i=j=1;

while(k<p*q)
{
    for(;j<=n&&k<p*q;j++)
    {
	cout<<a[i][j];
        k++;
    }
    j--;  
    i++;
    for(;i<=m && k<p*q;i++)
    {
        cout<<a[i][j];
        k++;
    }
    i--;
    j--;    
    for(;j>=i-m+1 && k<p*q;j--)
    {
        cout<<a[i][j];
        k++;
    }    
    j++;
    i--;
    for(;i>1 && k<p*q;i--)
    {
        cout<<a[i][j];
        k++;
    }
    if(k<p*q)
    {
        j++;
        i++;
        n--;
        m--;
    }
}
       }



main()
{
 f(a,m,n);
}