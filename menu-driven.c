//#include<stdio.h>
//
//int main()
//{
//	int a, choice;
//	printf("\n enetr no: ");
//	scanf("%d",&a);
//	
//	int salary, basic, da, ta, hra;
//	printf("\n Enter basic salary: ");
//	scanf("%d",&basic);
//	
//	do
//	{
//		printf("\n Enter choice: ");
//		printf("0.exit 1..even or odd 2.sallary \n");
//		scanf("%d",&choice);
//		
//		switch(choice)
//		{
//			case 1:
//				if(a%2==0)
//				{
//					printf("\n %d is even no: ",a);
//				}else
//				{
//					printf("\n %d is odd no: ",a);
//				}
//				break;
//				
//			case 2:
//			 if(basic<=5000)
//			  {
//			  	da=basic/10;
//			  	ta=basic/5;
//			  	hra=basic/4;
//			  	
//			  	salary=basic+da+ta+hra;
//			  	printf("\n salary: %d",salary);
//			  }else
//			  {
//			  	da=basic*15/100;
//			  	ta=basic*25/100;
//			  	hra=basic*30/100;
//			  	
//			  	
//			  	salary=basic+da+ta+hra;
//			  	printf("\n salary: %d",salary);
//			  	
//			  }
//			 	
//		}
//		
//	}
//	while(choice!=0);
	
//}

//type-1-without paramtere without return type

//#include <stdio.h>
//void func();
//void main()
//{
//	func();
//}
//
//void func()
//{
// 	int a, choice;
//	printf("\n enetr no: ");
//	scanf("%d",&a);
//	
//	int salary, basic, da, ta, hra;
//	printf("\n Enter basic salary: ");
//	scanf("%d",&basic);
//	
//	do
//	{
//		printf("\n Enter choice: ");
//		printf("0.exit 1..even or odd 2.sallary \n");
//		scanf("%d",&choice);
//		
//		switch(choice)
//		{
//			case 1:
//				if(a%2==0)
//				{
//					printf("\n %d is even no: ",a);
//				}else
//				{
//					printf("\n %d is odd no: ",a);
//				}
//				break;
//				
//			case 2:
//			 if(basic<=5000)
//			  {
//			  	da=basic/10;
//			  	ta=basic/5;
//			  	hra=basic/4;
//			  	
//			  	salary=basic+da+ta+hra;
//			  	printf("\n salary: %d",salary);
//			  }else
//			  {
//			  	da=basic*15/100;
//			  	ta=basic*25/100;
//			  	hra=basic*30/100;
//			  	
//			  	
//			  	salary=basic+da+ta+hra;
//			  	printf("\n salary: %d",salary);
//			  	
//			  }
//			 	
//		}
//		
//	}
//	while(choice!=0);
//}




//type-2-without paramtere with return type

//#include <stdio.h>
//int func();
//void main()
//{
//	func();
//}
//
//int func()
//{
// 	int a, choice;
//	printf("\n enetr no: ");
//	scanf("%d",&a);
//	
//	int salary, basic, da, ta, hra;
//	printf("\n Enter basic salary: ");
//	scanf("%d",&basic);
//	
//	do
//	{
//		printf("\n Enter choice: ");
//		printf("0.exit 1..even or odd 2.sallary \n");
//		scanf("%d",&choice);
//		
//		switch(choice)
//		{
//			case 1:
//				if(a%2==0)
//				{
//					printf("\n %d is even no: ",a);
//				}else
//				{
//					printf("\n %d is odd no: ",a);
//				}
//				break;
//				
//			case 2:
//			 if(basic<=5000)
//			  {
//			  	da=basic/10;
//			  	ta=basic/5;
//			  	hra=basic/4;
//			  	
//			  	salary=basic+da+ta+hra;
//			  	printf("\n salary: %d",salary);
//			  }else
//			  {
//			  	da=basic*15/100;
//			  	ta=basic*25/100;
//			  	hra=basic*30/100;
//			  	
//			  	
//			  	salary=basic+da+ta+hra;
//			  	printf("\n salary: %d",salary);
//			  	
//			  }
//			 	
//		}
//		
//	}
//	while(choice!=0);
//	return 0;
//}


//type-3-with paramtere without return type

//#include <stdio.h>
//void func(int,int,int,int,int,int,int);
//void main()
//{
//	int a,c,s,b,d,t,h;
//	func(a,c,s,b,d,t,h);
//}
//
//void func(int a, int choice ,int salary, int basic, int da, int ta, int hra)
//{
// 	
//	printf("\n enetr no: ");
//	scanf("%d",&a);
//	
//
//	printf("\n Enter basic salary: ");
//	scanf("%d",&basic);
//	
//	do
//	{
//		printf("\n Enter choice: ");
//		printf("0.exit 1..even or odd 2.sallary \n");
//		scanf("%d",&choice);
//		
//		switch(choice)
//		{
//			case 1:
//				if(a%2==0)
//				{
//					printf("\n %d is even no: ",a);
//				}else
//				{
//					printf("\n %d is odd no: ",a);
//				}
//				break;
//				
//			case 2:
//			 if(basic<=5000)
//			  {
//			  	da=basic/10;
//			  	ta=basic/5;
//			  	hra=basic/4;
//			  	
//			  	salary=basic+da+ta+hra;
//			  	printf("\n salary: %d",salary);
//			  }else
//			  {
//			  	da=basic*15/100;
//			  	ta=basic*25/100;
//			  	hra=basic*30/100;
//			  	
//			  	
//			  	salary=basic+da+ta+hra;
//			  	printf("\n salary: %d",salary);
//			  	
//			  }
//			 	
//		}
//		
//	}
//	while(choice!=0);
//	
//}


//type-4-with paramtere with return type

#include <stdio.h>
int func(int,int,int,int,int,int,int);
void main()
{
	int a,c,s,b,d,t,h;
	func(a,c,s,b,d,t,h);
}

int func(int a, int choice ,int salary, int basic, int da, int ta, int hra)
{
 	
	printf("\n enetr no: ");
	scanf("%d",&a);
	

	printf("\n Enter basic salary: ");
	scanf("%d",&basic);
	
	do
	{
		printf("\n Enter choice: ");
		printf("0.exit 1..even or odd 2.sallary \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				if(a%2==0)
				{
					printf("\n %d is even no: ",a);
				}else
				{
					printf("\n %d is odd no: ",a);
				}
				break;
				
			case 2:
			 if(basic<=5000)
			  {
			  	da=basic/10;
			  	ta=basic/5;
			  	hra=basic/4;
			  	
			  	salary=basic+da+ta+hra;
			  	printf("\n salary: %d",salary);
			  }else
			  {
			  	da=basic*15/100;
			  	ta=basic*25/100;
			  	hra=basic*30/100;
			  	
			  	
			  	salary=basic+da+ta+hra;
			  	printf("\n salary: %d",salary);
			  	
			  }
			 	
		}
		
	}
	while(choice!=0);
	return 0;
	
}

















