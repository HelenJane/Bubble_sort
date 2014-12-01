#include <iostream>
using namespace std;


int *bubble_sort(int *a,int n)
{
	int i=0,j;
	int temp;
	bool flag=false;
	while(flag==false)
	{
		flag=true;
		for(j=1;j<n-i;j++)
			{
				if(a[j-1]>a[j])
				{
					temp=a[j-1];
					a[j-1]=a[j];
					a[j]=temp;
					flag=false;
				}
			}
		i++;
	}
	cout<<"i="<<i<<endl;
	return a;
}

void main()
{
	int a[]={1,2,3,6,12,7,10,9,8,11};
	int i=0;
	int n=sizeof(a)/sizeof(int);
	bubble_sort(a,n);
	while(i<n)
	{
		cout<<a[i]<<" ";
		i++;
	}
	system("pause");
}

