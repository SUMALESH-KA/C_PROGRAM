#include <stdio.h>
#include <math.h>
void fib(int n){
  if(n==0){
    printf("[]");
    return 0;
  }
  long long * fib=(long long*)malloc(n*sizeof(long long));
  
  fib[0]=0;
  if(n > 1){
    fib[1]=1;
  }
  
  
  for(int i=2;i<n;i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
  
  printf("[");
  
  for(int i=0;i<n;i++){
    printf("%lld",fib[i]);
    if(i<n-1){
      printf(",");
    }
  }
  printf("]\n");
}

int main() {
    double input;
    int n;
    if (scanf("%lf", &input) != 1) {
        printf("invalid");
        return 0;
    }
    if (input < 0 || input != (int)input) {
        printf("invalid");
        return 0;
    }
    n = (int)input;
    fib(n);
    return 0;
}
