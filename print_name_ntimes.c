#include <stdio.h>
int print(int n)
{
  int count=0;
  if(count==n){
    return;
  }
  printf("sumal\n");
  count++;
  print(n-1);
}

int main(){
    int n;
    scanf("%d",&n);

    print(n);
}