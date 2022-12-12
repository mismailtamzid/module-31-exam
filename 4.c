#include<stdio.h>
#include<string.h>
int sort_string(int length, char S[]){
    int i, j, temp;
 for(i=0; i<length; i++){
  for(j=i+1; j<length; j++){
    if(S[i]>S[j]){
        temp=S[i];
        S[i]= S[j];
        S[j]= temp;
    }
   }
 }
}
int main(){
 int i,j, temp, length;
 char S[100];
 scanf("%s", S);
 length = strlen(S);
 sort_string(length, S);
for(i=0; i<length; i++){
    printf("%c", S[i]);
}
return 0;
}
