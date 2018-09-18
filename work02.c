#import <stdlib.h>
#import <time.h>

int main(){
  int arr[10];
  srand( time(NULL));
  for (int i = 0; i < 10; i++){
    arr[i] = rand();
  }
  arr[9] = 0;
  for (int i = 0; i < 10; i++){
    printf("%d \n",arr[i]);
  }
}
