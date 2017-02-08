#include <iostream>
using namespace std;
int main()
{
	int size=10;
	int no=0;
	int data[size];
	cout<<"\n";
	cout<<"        @** INSERTION SORT **@\n";
	cout<<"\n";
	

	cout<<"Enter 10 values to sort :"<<endl;
		for(int k=0;k<size;k++)
		{
		cin>>data[k];
		}
		cout<<"\n";
		cout<<"Array  :";

		for(int n=0;n<size;n++)
		{
		no=data[n];
		cout<<"["<<no<<"]";
		}

		cout<<"\n";

	int tmp,i,j,value;
	
	for(j=1;j<size;j++)
	{
	i=j-1;
	tmp=data[j];
	cout<<"Checking disorder values..\n";

		
		while((i>=0) && (tmp<data[i])){
		value=data[i];
		cout<<"Disorder values Found!\n";
		cout<<"swapped Value ["<<value<<"] with value ["<<tmp<<"]\n";
			
		data[i+1]=data[i];
		i--;
		}
	data[i+1]=tmp;
	cout<<endl;
	cout<<"Sorted Array :";
	for(int k=0;k<size;k++)
	{
	no=data[k];
	cout<<"["<<no<<"]";
	}
	cout<<endl;
	}

return 0;
}
