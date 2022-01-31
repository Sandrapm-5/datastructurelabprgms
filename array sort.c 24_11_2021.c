#include<stdio.h>
int main()
{
int n1,n2,n3;
printf("enter the size of first array :");
scanf("%d",&n1);
printf("enter the array elements:");
int a[n1];
for(int i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n1;i++)
{
int temp;
for(int j=i+1;j<n1;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(int i=0;i<n1;i++ )
{
printf("%d",a[i]);
}

printf("enter the size of second array:");
scanf("%d",&n2);
printf("enter the number of elements second array:");
int b[n2];
for( int i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
for(int i=0;i<n2;i++)
{
int temp;
for(int j=i+1;j<n2;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
for(int i=0;i<n2;i++)
{
printf("%d",b[i]);
}

n3=n1+n2;
printf("the merged elements:");
int c[n3];
for(int i=0;i<n1;i++)
{

c[i]=a[i];
}
int k=n1;
for(int i=0;i<n2;i++)
{
c[k]=b[i];
k++;
}

for(int i=0;i<n3;i++)
{
 int temp;
for(int j=i+1;j<n3;j++)
 {
 if(c[i]>c[j])
 {
 temp=c[i];
 c[i]=c[j];
 c[j]=temp;
 }
 }
 }
 for(int i=0;i<n3;i++)
 {
 printf("%d",c[i]);
 }
 }
