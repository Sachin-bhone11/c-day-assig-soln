//#include <stdio.h>
//
//void main()
//{
//	int a,b,c;
//	printf("enter three number :");
//	scanf("%d %d %d",&a,&b,&c);
//	
//	if(a>b)
//	{
//		if(a>c)
//		{
//			printf("a is greater ",a);
//		}else
//		{
//			printf("c is greater ",c);
//		}
//	}
//	else
//	{
//		if(b>c)
//		{
//			printf("b is greater ",b);
//		}
//		else
//		{
//			printf("c is greter");
//		}
//	}
//}

//type-1 without parameter without return type
//
//#include <stdio.h>
//void greter();
//void main()
//{
//	greter();
//}
//
//void greter()
//{
//	
//	int a,b,c;
//	printf("enter three number :");
//	scanf("%d %d %d",&a,&b,&c);
//	
//	if(a>b)
//	{
//		if(a>c)
//		{
//			printf("a is greater ",a);
//		}else
//		{
//			printf("c is greater ",c);
//		}
//	}
//	else
//	{
//		if(b>c)
//		{
//			printf("b is greater ",b);
//		}
//		else
//		{
//			printf("c is greter");
//		}
//	}
//
//}




//type-2 without parameter with return type

//#include <stdio.h>
//int greter();
//void main()
//{
//	greter();
//}
//
//int greter()
//{
//	
//	int a,b,c;
//	printf("enter three number :");
//	scanf("%d %d %d",&a,&b,&c);
//	
//	if(a>b)
//	{
//		if(a>c)
//		{
//			printf("a is greater ",a);
//		}else
//		{
//			printf("c is greater ",c);
//		}
//	}
//	else
//	{
//		if(b>c)
//		{
//			printf("b is greater ",b);
//		}
//		else
//		{
//			printf("c is greter");
//		}
//	}
//    return 0;
//}





//type-3 with parameter without return type

//#include <stdio.h>
//void greter(int,int,int);
//void main()
//{
//	int x,y,z;
//	greter(x,y,z);
//}
//
//void greter(int a,int b,int c)
//{
//	
//	
//	printf("enter three number :");
//	scanf("%d %d %d",&a,&b,&c);
//	
//	if(a>b)
//	{
//		if(a>c)
//		{
//			printf("a is greater ",a);
//		}else
//		{
//			printf("c is greater ",c);
//		}
//	}
//	else
//	{
//		if(b>c)
//		{
//			printf("b is greater ",b);
//		}
//		else
//		{
//			printf("c is greter");
//		}
//	}
//   
//}




//type-4 with parameter with return type

#include <stdio.h>
int greter(int,int,int);
void main()
{
	int x,y,z;
	greter(x,y,z);
}

int greter(int a,int b,int c)
{
	
	
	printf("enter three number :");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater ",a);
		}else
		{
			printf("c is greater ",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greater ",b);
		}
		else
		{
			printf("c is greter");
		}
	}
   return 0;
}






