#include<stdio.h>
int main(){
int n, x=0,y=1, z,i;
scanf("%d", &n);
for(i=0; i<n; i++){
    if(i<=1){
        z=i;
    }
    else{
        z=x+y;
        x=y;
        y=z;
    }
    printf("%d, ",z);
}
return 0;
}
