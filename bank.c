#include<stdio.h>
struct dataofcustomers
{
    int acc;
    char name[20];
    int bal;
}typedef doc;
void print(doc b[],int n)
{
    int i;
	printf("\nThe customer whose balance is less than 100 are: ");
    for(i=0;i<n;i++)
	{
        if(b[i].bal<100)
			printf("\nCustomer %d with Account no.= %d and Name= %s",i+1,b[i].acc,b[i].name);
    }
}
int main(){
    int n,i;
	printf("Total no. of customers = ");
	scanf("%d",&n);
	doc a[n];
	printf("\nEnter the Account no.,Name and balance of %d cutomers:\n\n",n);
	for(i=0;i<n;i++)
	{
		printf("Customer %d = ",i+1);
		scanf("%d%s%d",&a[i].acc,a[i].name,&a[i].bal);
		printf("\n");
	}
	print(a,n);
	int z;
	printf("\n\nIf you want to withdraw press 0.\nIf you want to deposit press 1.\n");
	scanf("%d",&z);
	int p,q,r;
	
	if(z==1)
	{
		printf("\nEnter your account no.= ");
		scanf("%d",&p);
		printf("\n Amount to be deposited = ");
		scanf("%d",&q);
		printf("\nEnter your code = ");
		scanf("%d",&r);
		for(i=0;i<n;i++)
		{
			if(p==a[i].acc)
			printf("Now your total balance is %d",a[i].bal+q);
		}
	}
	else{
	printf("\nEnter your account no.= ");
	scanf("%d",&p);
	printf("Amount to withdraw = ");
	scanf("%d",&q);
	printf("Enter your password =");
	scanf("%d",&r);
	
	for(i=0;i<n;i++)
	{
		if(p==a[i].acc)
			if(a[i].bal<100)
				printf("\nInsufficient balance");
	    	else
				printf("\nNow your balance is %d",a[i].bal-q);
	    }
	}
    return 0;
}