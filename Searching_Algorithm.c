#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[100],i,n,item,s=0,ch,beg,end,mid;
printf("Enter No. of Elements:");
scanf("%d",&n);
printf("\nEnter Elements:\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
while(1)
{
printf("\n1.Linear Search\n2.Binary Search\n3.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("<-----LINEAR SEARCH----->\n");
printf("\nEnter Element you want to Search:");
scanf("%d",&item);
for(i=1;i<=n;i++)
{
if(a[i]==item)
{
printf("\nData is Found at Location : %d",i);
s=1;
break;
}
}
if(s==0)
{
printf("Data is Not Found");
}
break;
case 2:
printf("<-----BINARY SEARCH----->\n");
printf("\nEnter Item you want to Search:");
scanf("%d",&item);
beg=1;
end=n;
mid=(beg+end)/2;
while(beg<=end && a[mid]!=item)
{
if(a[mid]<item)
beg=mid+1;
else
end=mid-1;
mid=(beg+end)/2;
}
if(a[mid]==item)
{
printf("\nData is Found at Location : %d",mid);
}
else
{
printf("Data is Not Found");
}
break;
case 3:
default:
exit(0);
}
}
getch();
}
