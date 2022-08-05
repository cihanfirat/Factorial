#include <stdio.h>
int fact (int n);

int main() {
  int number;
  printf("Select a Number:");
  scanf("%d", &number);
  
  if (number>0){
      int result = fact(number);
      printf("Factorial:%d", result);
  }
  else {
      printf("Enter a Positive Value:");
  }

    return 0;
}

int fact (int n){
    if (n == 1 || n == 0 ){
        return 1;
    }
    
    else{
        return n * fact(n-1);
    }
}
