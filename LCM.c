#include<stdio.h>
int LCMof(int i,int j);
int main()
{
	int a,b,LCM;
	printf("Enter first no.: ");
	scanf("%d",&a);
	printf("Enter second no.: ");
	scanf("%d",&b);
	LCM= LCMof(a,b);
	printf("LCM of %d and %d is %d\n",a,b,LCM);
	return 0;
	
}

int LCMof(int i,int j)
{
   static c=1;
 if(c%i==0 && c%j==0)
    {
     	
	  return c;
    }
 else
 {   
   c++;
   LCMof(i,j);
   return c;
 }

}
