#include<stdio.h>
#include<stdlib.h>
int flag,a,b,diff;
void printprimes(int num1,int num2);
int isPrime(int n);
int main(void)
{
       int num1=0,num2=0;
         printf("Enter your number\n");
        scanf("%d %d",&num1,&num2);
       printf("Prime number between %d and %d are\n",num1,num2);
       printprimes(num1,num2);
         return 0;
}
void printprimes(int num1,int num2)
{
   int i=0,a=0,b=0,diff=0;
for(i=num1;i<=num2;i++)
if(isPrime(i))
{
   if(flag==1)
    {

        a=i;
        --flag;
     }
      else
     {
         b=i;
          flag++;
     }
diff=a-b;
if(diff==6)
{
printf("(%d %d)\t",b,a);
diff=0;
a=0;
b=0;
}
}
int isPrime(int n)
{
int i=0;
for(i=2;i<=sqrt(n);i++)
         if(n%i==0)
            return 0;
           return 1;
}







