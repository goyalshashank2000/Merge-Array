#include<iostream.h>
#include<conio.h>
void merge1(int a[],int b[],int c[],int m,int n)
{
	int i,j,k;
	i=0;
	j=0;
	k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else if(a[i]>b[j])
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<m)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<n)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	cout<<"\n\tAfter Merge,New Array Elements Are : ";
	for(i=0;i<m+n;i++)
		cout<<c[i]<<" ";

}
void merge2(int a[],int b[],int c[],int m,int n)
{
	int i,j,k;
	i=m-1;
	j=n-1;
	k=0;
	while(i>=0 && j>=0)
	{
		if(a[i]>b[j])
		{
			c[k]=a[i];
			k++;
			i--;
		}
		else if(a[i]<b[j])
		{
			c[k]=b[j];
			k++;
			j--;
		}
	}
	while(i>=0)
	{
		c[k]=a[i];
		k++;
		i--;
	}
	while(j>=0)
	{
		c[k]=b[j];
		k++;
		j--;
	}
	cout<<"\n\tAfter Merge,New Array Elements Are : ";
	for(i=0;i<m+n;i++)
		cout<<c[i]<<" ";

}

void main()
{
	int a[20],b[20],c[40];
	int i,j,ch;
	clrscr();
	do
	{
		cout<<"\n\t1. Case-1\n\t2. Case-2\n\t3. Case-3\n\t4. Case-4";
		cout<<"\n\t5. Case-5\n\t6. Case-6\n\t7. Case-7\n\t8. Case-8";
		cout<<"\n\t9. Case-9\n\t  Enter Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\n\tEnter First Array In Assending Order : ";
				for(i=0;i<5;i++)
					cin>>a[i];
				cout<<"\n\tEnter Second array In Assending Order : ";
				for(j=0;j<5;j++)
					cin>>b[j];
				merge1(a,b,c,i,j);
				break;
			case 2: cout<<"\n\tEnter First Array In Assending Order : ";
				for(i=0;i<5;i++)
					cin>>a[i];
				cout<<"\n\tEnter Second array In Assending Order : ";
				for(j=0;j<5;j++)
					cin>>b[j];
				merge2(a,b,c,i,j);
				break;

		}
	}while(ch>=1 && ch<=9);
getch();
}