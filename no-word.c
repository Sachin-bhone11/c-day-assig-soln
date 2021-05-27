//#include <stdio.h>
//
//int main()
//{
//    int n, num = 0;
//
//    printf("Enter any number to print in words: ");
//    scanf("%d", &n);
//
//
//    while(n != 0)
//    {
//        num = (num * 10) + (n % 10);
//        n /= 10;
//    }
//
//    while(num != 0)
//    {
//        switch(num % 10)
//        {
//            case 0: 
//                printf("Zero ");
//                break;
//            case 1: 
//                printf("One ");
//                break;
//            case 2: 
//                printf("Two ");
//                break;
//            case 3: 
//                printf("Three ");
//                break;
//            case 4: 
//                printf("Four ");
//                break;
//            case 5: 
//                printf("Five ");
//                break;
//            case 6: 
//                printf("Six ");
//                break;
//            case 7: 
//                printf("Seven ");
//                break;
//            case 8: 
//                printf("Eight ");
//                break;
//            case 9: 
//                printf("Nine ");
//                break;
//        }
//        
//        num = num / 10;
//    }
//
//    return 0;
//}


//type-1-witout para without reutrn type
//#include <stdio.h>
//void convert();
//void main()
//{
//	convert();
//}
//
//void convert()
//{
// int n, num = 0;
//
//    printf("Enter any number to print in words: ");
//    scanf("%d", &n);
//
//
//    while(n != 0)
//    {
//        num = (num * 10) + (n % 10);
//        n /= 10;
//    }
//
//    while(num != 0)
//    {
//        switch(num % 10)
//        {
//            case 0: 
//                printf("Zero ");
//                break;
//            case 1: 
//                printf("One ");
//                break;
//            case 2: 
//                printf("Two ");
//                break;
//            case 3: 
//                printf("Three ");
//                break;
//            case 4: 
//                printf("Four ");
//                break;
//            case 5: 
//                printf("Five ");
//                break;
//            case 6: 
//                printf("Six ");
//                break;
//            case 7: 
//                printf("Seven ");
//                break;
//            case 8: 
//                printf("Eight ");
//                break;
//            case 9: 
//                printf("Nine ");
//                break;
//        }
//        
//        num = num / 10;
//    }	
//}



//type-2-witout para with reutrn type
//#include <stdio.h>
//int convert();
//void main()
//{
//	convert();
//}
//
//int convert()
//{
// int n, num = 0;
//
//    printf("Enter any number to print in words: ");
//    scanf("%d", &n);
//
//
//    while(n != 0)
//    {
//        num = (num * 10) + (n % 10);
//        n /= 10;
//    }
//
//    while(num != 0)
//    {
//        switch(num % 10)
//        {
//            case 0: 
//                printf("Zero ");
//                break;
//            case 1: 
//                printf("One ");
//                break;
//            case 2: 
//                printf("Two ");
//                break;
//            case 3: 
//                printf("Three ");
//                break;
//            case 4: 
//                printf("Four ");
//                break;
//            case 5: 
//                printf("Five ");
//                break;
//            case 6: 
//                printf("Six ");
//                break;
//            case 7: 
//                printf("Seven ");
//                break;
//            case 8: 
//                printf("Eight ");
//                break;
//            case 9: 
//                printf("Nine ");
//                break;
//        }
//        
//        num = num / 10;
//    }
//	return 0;	
//}



//type-3-with para without reutrn type
//#include <stdio.h>
//void convert(int, int);
//void main()
//{
//	int n1,num1;
//	convert(n1,0);
//}
//
//void convert(int n ,int num)
//{
//
//   num=0;
//    printf("Enter any number to print in words: ");
//    scanf("%d", &n);
//
//
//    while(n != 0)
//    {
//        num = (num * 10) + (n % 10);
//        n /= 10;
//    }
//
//    while(num != 0)
//    {
//        switch(num % 10)
//        {
//            case 0: 
//                printf("Zero ");
//                break;
//            case 1: 
//                printf("One ");
//                break;
//            case 2: 
//                printf("Two ");
//                break;
//            case 3: 
//                printf("Three ");
//                break;
//            case 4: 
//                printf("Four ");
//                break;
//            case 5: 
//                printf("Five ");
//                break;
//            case 6: 
//                printf("Six ");
//                break;
//            case 7: 
//                printf("Seven ");
//                break;
//            case 8: 
//                printf("Eight ");
//                break;
//            case 9: 
//                printf("Nine ");
//                break;
//        }
//        
//        num = num / 10;
//    }	
//}




//type-4-with para with reutrn type
#include <stdio.h>
int convert(int, int);
void main()
{
	int n1,num1;
	convert(n1,0);
}

int convert(int n ,int num)
{

   num=0;
    printf("Enter any number to print in words: ");
    scanf("%d", &n);


    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num = num / 10;
    }
	return 0;	
}



