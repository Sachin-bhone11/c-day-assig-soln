//#include <stdio.h>
//
//int main()
//{
//	int n,rem,sum=0,rev=0;
//	printf("Enter number:");
//	scanf("%d",&n);
//	
//	
//	while(n>0)
//	{
//		rem=n%10;
//		sum=sum+rem;
//		rev=rev*10+rem;
//		n=n/10;
//	}
//	
//	printf("sum of digit is:%d",sum);
//	printf("\n reverse no is:%d",rev);
//	return 0;
//}


//type-1 without parameter without return type

//#include <stdio.h>
//
//void func();
//void main()
//{
//      func();
//}
//
//void func(){
//		int n,rem,sum=0,rev=0;
//	    printf("Enter number:");
//	    scanf("%d",&n);
//	
//	
//	while(n>0)
//	{
//		rem=n%10;
//		sum=sum+rem;
//		rev=rev*10+rem;
//		n=n/10;
//	}
//	
//	printf("sum of digit is:%d",sum);
//	printf("\n reverse no is:%d",rev);
//}




//type-2 without parameter with return type

//#include <stdio.h>
//
//int func();
//void main()
//{
//      func();
//}
//
//int func(){
//		int n,rem,sum=0,rev=0;
//	    printf("Enter number:");
//	    scanf("%d",&n);
//	
//	
//	while(n>0)
//	{
//		rem=n%10;
//		sum=sum+rem;
//		rev=rev*10+rem;
//		n=n/10;
//	}
//	
//	printf("sum of digit is:%d",sum);
//	printf("\n reverse no is:%d",rev);
//	return 0;
//}




//type-3 with parameter without return type

//#include <stdio.h>
//
//void func(int,int,int,int);
//void main()
//{ 
//       int n1,re,su=0,r=0;
//      func(n1,re,su,r);
//}
//
//void func(int n,int rem,int sum, int rev)
//{
//		sum=0;
//		rev=0;
//		
//	    printf("Enter number:");
//	    scanf("%d",&n);
//	
//	
//	while(n>0)
//	{
//		rem=n%10;
//		sum=sum+rem;
//		rev=rev*10+rem;
//		n=n/10;
//	}
//	
//	printf("sum of digit is:%d",sum);
//	printf("\n reverse no is:%d",rev);
//	
//}




//type-4 with parameter with return type

#include <stdio.h>
int func(int,int,int,int);
void main()
{ 
       int n1,re,su=0,r=0;
      func(n1,re,su,r);
}

int func(int n,int rem,int sum, int rev)
{
		sum=0;
		rev=0;
		
	    printf("Enter number:");
	    scanf("%d",&n);
	
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		rev=rev*10+rem;
		n=n/10;
	}
	
	printf("sum of digit is:%d",sum);
	printf("\n reverse no is:%d",rev);
	return 0;
}














