#import <stdlib.h>
#import <time.h>

int main(){
  int arr[10];
  srand( time(NULL));
  for (int i = 0; i < 10; i++){
    arr[i] = rand();
  }
  arr[9] = 0;
  printf("Orignal Array:\n");
  for (int i = 0; i < 10; i++){
    printf("%d\n",arr[i]);
  }
  int arr2[10];
  int * a = arr;
  int * b = arr2 + 10;
  for (int i = 0; i < 10; i ++){
    b--;
    *b = *a;
    a++;
  }
  printf("Reversed array: \n");
  for (int i = 0; i < 10; i++){
    printf("%d\n",arr2[i]);
  }
  return 0;
}
