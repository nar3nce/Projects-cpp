#include<iostream.h>
#include<conio.h>


//qsort components
void quick_sort(int[],int,int);
int partition(int[],int,int);		        
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    do
    {
        do
            i++;      
        while(a[i]<v&&i<=u);        
        do
            j--;
        while(v<a[j]);       
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);   
    a[l]=a[j];
    a[j]=v;  
    return(j);

}
//end





void bsort()
{
int n, i, arr[50], j, temp;
	cout<<"Enter total number of elements : ";
	cin>>n;
	cout<<"Enter "<<n<<" numbers : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Array after sorting : ";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}		
}


void isort()
{
int size, arr[50], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"Array after sorting : ";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void selsort()

{
int size, arr[50], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Now the Array after sorting is : ";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}	
}


void main()
{
clrscr(); 
int yes, sort;

	
	
 do{

   cout<<"Please Select Sorting Algorithm \n1 = quick sort\n2 = bubble sort\n3 = insert sort\n4 = selection sort\n"; 
   cin>>sort;
   
   if(sort == 1)
   {
   	
   	int a[50],n,i;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter Array Elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];    
    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
   	
   	
   }
   
   else if (sort == 2)
   {
   	bsort();
   }
   
   else if (sort == 3)
   {
   	isort();
   }
   
   else if (sort == 4)
   {
    selsort();
   }
   
   else 
   {
   	cout<<"Invalid input";
   }
   
	
	
	
	
	
	
	
	
cout<<"\nThank you for using! Enter 1 to try again, enter any number to exit : ";
cin>>yes;	
}
while(yes == 1);
cout<<"\nThankYou for using my program!";
	
	
getch();
}