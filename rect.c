//#include<stdio.h>

// void main() 
//{
//   int length, breadth, area,perimeter;
// 
//   printf("\nEnter the Length of Rectangle : ");
//   scanf("%d", &length);
// 
//   printf("\nEnter the Breadth of Rectangle : ");
//   scanf("%d", &breadth);
// 
//   area = length * breadth;
//   
//   perimeter=2*(length+breadth);
//
//   printf("\nArea of Rectangle : %d", area);
//   printf("\nPerimeter of Rectangle : %d", perimeter);
//
//
//}

//type1-without parameter without return type

//#include<stdio.h>
//void areaP();
//
//void main()
//{
//	 areaP();
//	 
//}
//
//void areaP()
//{
//	int length, breadth, area,perimeter;
//	 printf("\nEnter the Length of Rectangle : ");
//     scanf("%d", &length);
// 
//      printf("\nEnter the Breadth of Rectangle : ");
//      scanf("%d", &breadth);
//  
//       area = length * breadth;
//       perimeter=2*(length+breadth);
//       printf("\nArea of Rectangle : %d", area);
//       printf("\nPerimeter of Rectangle : %d", perimeter);
//}
// 



//type2-without parameter with return type

//#include<stdio.h>
//int area();
//int perimeter();
//void main()
//{
//	int result,perimeterR;
//	result =area();
//	printf("\nArea of Rectangle : %d",result);
//	perimeterR=perimeter();
//	printf("\nPerimeter of Rectangle : %d", perimeter);
//	 
//}
//
//int area()
//{
//	int length, breadth, area,perimeter;
//	 printf("\nEnter the Length of Rectangle : ");
//     scanf("%d", &length);
// 
//      printf("\nEnter the Breadth of Rectangle : ");
//      scanf("%d", &breadth);
//  
//       area = length * breadth;
//
//       return area;
//       
//}
//
//
//int perimeter()
//{
//	int length, breadth, area,perimeter;
//	 printf("\nEnter the Length of Rectangle : ");
//     scanf("%d", &length);
// 
//      printf("\nEnter the Breadth of Rectangle : ");
//      scanf("%d", &breadth);
//  
//       perimeter=2*(length+breadth);
// 
//       return perimeter;
//       
//}

//type3-with parameter without return type

//#include<stdio.h>
//void area(int,int,int);
//void perimeter(int,int,int);
//void main()
//{
//	
//	area();
//	perimeter();
//	
//	 
//}
//
//void area(int length, int breadth, int area)
//{
//	
//	 printf("\nEnter the Length of Rectangle : ");
//     scanf("%d", &length);
// 
//      printf("\nEnter the Breadth of Rectangle : ");
//      scanf("%d", &breadth);
//  
//       area = length * breadth;
//       printf("\narea of Rectangle : %d", area);
//       
//}
//
//
//void perimeter(int length, int breadth, int perimeter)
//{
//	
//	 printf("\nEnter the Length of Rectangle : ");
//     scanf("%d", &length);
// 
//      printf("\nEnter the Breadth of Rectangle : ");
//      scanf("%d", &breadth);
//  
//       perimeter=2*(length+breadth);
//       printf("\nPerimeter of Rectangle : %d", perimeter);
//       
//}


//type4-with parameter with return type



#include<stdio.h>
int area(int,int,int);
int perimeter(int,int,int);
int main()
{
	int l,b,Rarea,perimeterR,r,a,p;
	printf("\nEnter the Length of Rectangle : ");
     scanf("%d", &l);
     
     printf("\nEnter the Breadth of Rectangle : ");
      scanf("%d", &b);
  
	Rarea=area(l,b,a);
	printf("%d",Rarea);
	printf("\nArea of Rectangle : %d", Rarea);
	perimeterR=perimeter(l,b,p);
printf("\nPerimeter of Rectangle : %d", perimeterR);
	
	 
}

int area(int length, int breadth, int area)
{
	
      
       area = length * breadth;
       return area;
       
}


int perimeter(int length, int breadth, int perimeter)
{
	
       perimeter=2*(length+breadth);
       return perimeter;
       
}
























