//#include <stdio.h>
//
//void main()
//{
//	int n;
//	printf("enter number: ");
//	scanf("%d",&n);
//	
//	if(n%2==0)
//	printf("no is even %d ",n);
//	else
//	printf("no is odd %d ",n);
//}


//1st type-without parameter without return type

//#include <stdio.h>
//
//void func();
//void main()
//{
//	func();
//}
//
//void func()
//{
//		int n;
//	printf("enter number: ");
//	scanf("%d",&n);
//	
//	if(n%2==0)
//	printf("no is even %d ",n);
//	else
//	printf("no is odd %d ",n);
//}


////2nd type-without parameter with return type
//
//#include <stdio.h>
//
//int func();
//void main()
//{
//	func();
//}
//
//int func()
//{
//		int n;
//	printf("enter number: ");
//	scanf("%d",&n);
//	
//	if(n%2==0)
//	printf("no is even %d ",n);
//	else
//	printf("no is odd %d ",n);
//	return 0;
//}


//3rd type-with parameter without return type

//#include <stdio.h>
//
//void func(int);
//void main()
//{
//	int n1;
//	func(n1);
//}
//
//void func(int n)
//{
//	
//	printf("enter number: ");
//	scanf("%d",&n);
//	
//	if(n%2==0)
//	printf("no is even %d ",n);
//	else
//	printf("no is odd %d ",n);
//
//}




//4th type-with parameter with return type

#include <stdio.h>

int func(int);
void main()
{
	int n1;
	func(n1);
}

int func(int n)
{
	
	printf("enter number: ");
	scanf("%d",&n);
	
	if(n%2==0)
	printf("no is even %d ",n);
	else
	printf("no is odd %d ",n);
	return 0;

}


