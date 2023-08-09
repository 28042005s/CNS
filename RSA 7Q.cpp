#include<stdio.h>
#include<math.h>
int main(){
	int n,p,q,dn,e,d,m;
	printf("enter the value of p:");
	scanf("%d",&p);
	printf("enter the value of q:");
	scanf("%d",&q);
	printf("enter the value of e:");
	scanf("%d",&e);
	printf("enter the value of m:");
	scanf("%d",&m);
	n=p*q;
	dn=(p-1)*(q-1);
	for(int i=1;i<dn;i++){
		if((e%dn)*(i%dn)%dn==1){
			d=1;
			break;
		}
	}
	int x=pow(m,e);
	int c=x%n;
	printf("encryption=%d",c);
	int de=pow(c,d);
	printf("\n decryption=%d",de%n);
	
}
