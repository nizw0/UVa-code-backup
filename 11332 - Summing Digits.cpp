#include <stdio.h>
int main(){
	int num, sum,i=1;
	while(scanf("%d",&num)!=EOF){
		if(num==0) return 0;
		while(i){
			sum=0;
			while(num>0){
				sum+=num%10;
				num/=10;
			}
			if(sum>9)
				num=sum;
			else
				break;
		}	
		printf("%d\n",sum);
	}
	return 0;
}