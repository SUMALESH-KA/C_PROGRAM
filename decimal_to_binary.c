
#include <stdio.h>

int binarytodecimal(int decimal){
  
  int binary[32];
  int index=0;
  while(decimal==0){
    printf("0");
    return;
  }
  
  while( decimal > 0){
    binary[index++]=decimal%2;
    decimal/=2;
  }
  
  for(int i=index-1 ;i >=0 ;i--){
    printf("%d",binary[i]);
  }
}
int main()
{
    int s;
    scanf("%d",&s);
    
    binarytodecimal(s);
    
}
