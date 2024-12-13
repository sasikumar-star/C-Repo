#include <stdio.h>
int main() {
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int arr[n],sum=0,sum1=0;
	for(int i=1;i<=n;i++){
	    if(i%2==0){
	        sum+=a;
	    }
	    else{
	        sum1+=b;
	    }
	}
printf("%d\n",sum+sum1);
}
