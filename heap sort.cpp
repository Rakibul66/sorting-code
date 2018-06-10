#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int a[MAX],b,c,i,j;
	cout<<"enter total element:";
	cin>>b;
	if(b<0||b>MAX)
	{
		cout<<"\ninput valid range:";
	//	return-1
	}
	for(i=0;i<b;i++)
	{
		cout<<"enter elemnt ["<<i+1<<"]:";
		cin>>a[i];
	}
	cout<<"\nentered numbers:";
	for(i=0;i<b;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<endl;
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	cout<<"array after heap sort:"<<endl;
	for(i=0;i<b;i++)
	{cout<<a[i]<<endl;
	
	}
	return 0;
	
}

