//#include <stdio.h>
//
//void main()
//{
//	char operator;
//	int n1,n2;
//	
//	
//	printf("Enter an operator (+, -, *, /): ");
//	scanf("%c", &operator);
//	printf("Enter two operator: ");
//	scanf("%d %d",&n1,&n2);
//	
//	
//	switch(operator)
//	{
//		case '+':
//			printf(" %d + %d = %d",n1,n2,n1+n2);
//			break;
//		 
//		 	case '-':
//			printf(" %d - %d = %d",n1,n2,n1-n2);
//			break;
//		
//			case '*':
//			printf(" %d * %d = %d",n1,n2,n1*n2);
//			break;
//			
//			case '/':
//			printf(" %d / %d = %d",n1,n2,n1/n2);
//			break;
//			
//			default:
//				printf("Error! operator is not correct");
//	}
//	
//}


//type-1- without parameter without return type
//#include <stdio.h>
//
//void operator();
//void main()
//{
//	   operator();
//}
//
//void operator()
//{
//		char operator;
//	int n1,n2;
//	
//	
//	printf("Enter an operator (+, -, *, /): ");
//	scanf("%c", &operator);
//	printf("Enter two operator: ");
//	scanf("%d %d",&n1,&n2);
//	
//	
//	switch(operator)
//	{
//		case '+':
//			printf(" %d + %d = %d",n1,n2,n1+n2);
//			break;
//		 
//		 	case '-':
//			printf(" %d - %d = %d",n1,n2,n1-n2);
//			break;
//		
//			case '*':
//			printf(" %d * %d = %d",n1,n2,n1*n2);
//			break;
//			
//			case '/':
//			printf(" %d / %d = %d",n1,n2,n1/n2);
//			break;
//			
//			default:
//				printf("Error! operator is not correct");
//	}
//	
//}




//type-2- without parameter with return type
//#include <stdio.h>
//
//int operator();
//void main()
//{
//	   operator();
//}
//
//int operator()
//{
//		char operator;
//	int n1,n2;
//	
//	
//	printf("Enter an operator (+, -, *, /): ");
//	scanf("%c", &operator);
//	printf("Enter two operator: ");
//	scanf("%d %d",&n1,&n2);
//	
//	
//	switch(operator)
//	{
//		case '+':
//			printf(" %d + %d = %d",n1,n2,n1+n2);
//			break;
//		 
//		 	case '-':
//			printf(" %d - %d = %d",n1,n2,n1-n2);
//			break;
//		
//			case '*':
//			printf(" %d * %d = %d",n1,n2,n1*n2);
//			break;
//			
//			case '/':
//			printf(" %d / %d = %d",n1,n2,n1/n2);
//			break;
//			
//			default:
//				printf("Error! operator is not correct");
//	}
//	return 0;
//	
//}



//type-3- with parameter without return type
//#include <stdio.h>
//
//void operator(char,int,int);
//void main()
//{
//	   char op;
//	   int num1, num2;
//	   operator(op,num1,num2);
//}
//
//void operator(char operator, int n1,int n2)
//{
//	
//	printf("Enter an operator (+, -, *, /): ");
//	scanf("%c", &operator);
//	printf("Enter two operator: ");
//	scanf("%d %d",&n1,&n2);
//	
//	
//	switch(operator)
//	{
//		case '+':
//			printf(" %d + %d = %d",n1,n2,n1+n2);
//			break;
//		 
//		 	case '-':
//			printf(" %d - %d = %d",n1,n2,n1-n2);
//			break;
//		
//			case '*':
//			printf(" %d * %d = %d",n1,n2,n1*n2);
//			break;
//			
//			case '/':
//			printf(" %d / %d = %d",n1,n2,n1/n2);
//			break;
//			
//			default:
//				printf("Error! operator is not correct");
//	}
//
//	
//}



//type-4- with parameter with return type
#include <stdio.h>

int operator(char,int,int);
void main()
{
	   char op;
	   int num1, num2;
	   operator(op,num1,num2);
}

int operator(char operator, int n1,int n2)
{
	
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operator);
	printf("Enter two operator: ");
	scanf("%d %d",&n1,&n2);
	
	
	switch(operator)
	{
		case '+':
			printf(" %d + %d = %d",n1,n2,n1+n2);
			break;
		 
		 	case '-':
			printf(" %d - %d = %d",n1,n2,n1-n2);
			break;
		
			case '*':
			printf(" %d * %d = %d",n1,n2,n1*n2);
			break;
			
			case '/':
			printf(" %d / %d = %d",n1,n2,n1/n2);
			break;
			
			default:
				printf("Error! operator is not correct");
	}
     return 0;
	
}














