//array

//#include <stdio.h>
//
//void main()
//{
//	int arr[5]={10,20,30};
//	int i;
//	for(i=0;i<5;i++)
//	{
//		printf("%d \n",arr[i]);
//	}
//}



//#include <stdio.h>

//void main()
//{
//	char arr[5]={'A','B','C'};
//	int i;
//	for(i=0;i<5;i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//}


//void main()
//{
//	char arr[5]={'A','B'};
//	
//	printf("%s",arr);
//}



//void main()
//{
//	char brr[3]={'A','B','C'};
//	printf("%s",brr);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5]={10,20,30};
//	int* ptr;
//	int i;
//	ptr = &arr[0];
//	
//	for(i=0;i<5;i++)
//	{
//		printf("%d\n",*(ptr+i));
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int arr[5]={10,20,30};
//	int* ptr=arr;
//	int i;
//	
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&ptr[i]);
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d\n",ptr[i]);
//	}
//}



#include <stdio.h>
void display(int*,int);
void main()
{
	int arr[5]={10,20,30};
	display(arr,5);
}

void display(int* ptr,int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("%d\n",ptr[i]);
	}
}





