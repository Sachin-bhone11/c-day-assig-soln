//#include<stdio.h>
//int main()
//{
//	int n;
//	float price,purchase,discount;
//	printf("enter the price\n");
//	scanf("%f",&price);
//
//	printf("\nAre You A student\nPress 1 for Yes\nPress 2 for no\n");
//	scanf("%d",&n);
//
//	if(n==1)
//	{
//		if(price>500)
//		{
//			purchase=(price*20)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//		else
//		{
//			purchase=(price*10)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//	}
//	else if(n==2)
//	{
//		if(price>600)
//		{
//			purchase=(price*15)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//		else
//		{
//			purchase=(price*20)/100;
//			printf("Not eligible for discount\nYour Price=%.2f",price);
//		}
//	}
//	
//		
//	}


//type-1-wihout parameter without retturn type
//#include <stdio.h>
//
//void student();
//void main()
//{
//	student();
//}
//
//void student()
//{
//	int n;
//	float price,purchase,discount;
//	printf("enter the price\n");
//	scanf("%f",&price);
//
//	printf("\nAre You A student\nPress 1 for Yes\nPress 2 for no\n");
//	scanf("%d",&n);
//
//	if(n==1)
//	{
//		if(price>500)
//		{
//			purchase=(price*20)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//		else
//		{
//			purchase=(price*10)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//	}
//	else if(n==2)
//	{
//		if(price>600)
//		{
//			purchase=(price*15)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//		else
//		{
////			purchase=(price*20)/100;
//			printf("Not eligible for discount\nYour Price=%.2f",price);
//		}
//	}
//	
//}




//type-2-wihout parameter with retturn type
//#include <stdio.h>
//
//int student();
//void main()
//{
//	student();
//}
//
//int student()
//{
//	int n;
//	float price,purchase,discount;
//	printf("enter the price\n");
//	scanf("%f",&price);
//
//	printf("\nAre You A student\nPress 1 for Yes\nPress 2 for no\n");
//	scanf("%d",&n);
//
//	if(n==1)
//	{
//		if(price>500)
//		{
//			purchase=(price*20)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//		else
//		{
//			purchase=(price*10)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//	}
//	else if(n==2)
//	{
//		if(price>600)
//		{
//			purchase=(price*15)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//		else
//		{
////			purchase=(price*20)/100;
//			printf("Not eligible for discount\nYour Price=%.2f",price);
//		}
//	}
//	   return 0;

//type-3-wih parameter without retturn type
#include <stdio.h>

void student(int,float,float,float);
void main()
{
	int n1;
	float pr,pu,dis;
	student(n1,pr,pu,dis);
}

void student(int n,float price, float purchase, float discount)
{		printf("enter the price\n");
	scanf("%f",&price);

	printf("\nAre You A student\nPress 1 for Yes\nPress 2 for no\n");
	scanf("%d",&n);

	if(n==1)
	{
		if(price>500)
		{
			purchase=(price*20)/100;
			printf("Discounted Price is %.2f=",(price-purchase));
		}
		else
		{
			purchase=(price*10)/100;
			printf("Discounted Price is %.2f=",(price-purchase));
		}
	}
	else if(n==2)
	{
		if(price>600)
		{
			purchase=(price*15)/100;
			printf("Discounted Price is %.2f=",(price-purchase));
		}
		else
		{
//			purchase=(price*20)/100;
			printf("Not eligible for discount\nYour Price=%.2f",price);
		}
	}
	
}




//type-4-wih parameter with retturn type
//#include <stdio.h>
//
//int student(int,float,float,float);
//void main()
//{
//	int n1;
//	float pr,pu,dis;
//	student(n1,pr,pu,dis);
//}
//
//int student(int n,float price, float purchase, float discount)
//{		printf("enter the price\n");
//	scanf("%f",&price);
//
//	printf("\nAre You A student\nPress 1 for Yes\nPress 2 for no\n");
//	scanf("%d",&n);
//
//	if(n==1)
//	{
//		if(price>500)
//		{
//			purchase=(price*20)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//		else
//		{
//			purchase=(price*10)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//	}
//	else if(n==2)
//	{
//		if(price>600)
//		{
//			purchase=(price*15)/100;
//			printf("Discounted Price is %.2f=",(price-purchase));
//		}
//		else
//		{
////			purchase=(price*20)/100;
//			printf("Not eligible for discount\nYour Price=%.2f",price);
//		}
//	}
//	   return 0;
//}





