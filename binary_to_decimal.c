#include <stdio.h>
#include <string.h>

long long binaryToDec( char *binaryStr) {
    long long ans = 0;
    
    for(int i=0 ;i < strlen(binaryStr);i++){
      char digit = binaryStr[i];
      
      if(digit!='0' && digit!='1'){
        return -1;
      }
      ans = ans * 2 + (digit - '0');
    }
    
    return ans;
}

int main() {
    char binaryStr[100];
    printf("Enter a binary number: ");
    scanf("%s", binaryStr);

    long long decimalValue = binaryToDec(binaryStr);
    
    if (decimalValue == -1) {
        printf("Error: Invalid binary number\n");
    } else {
        printf("Decimal value: %lld\n", decimalValue);
    }

    return 0;
}