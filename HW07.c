#include <stdio.h> 
#include <stdlib.h>
int main(void) 
{ 
int i=0,sum=0,N=0; 
printf("�п�Jn="); 
scanf("%d",&N); 
for(i=0;i<=N;i++){ 
sum+=i; 
} 
printf("1+2+...+ %d =%d",N,sum); 
system("PAUSE"); 
return 0; 
}
