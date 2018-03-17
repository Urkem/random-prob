#include <stdio.h>

void selection_sort(int a[], int n){
  int i,k,min,temp;
  for(i=0;i<n-1;i++){
    min = i;
    for(k=i+1;k<n;k++){
      if(a[min] > a[k]){
        min = k;
      }
    }
    if(min != i){
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  }
}


void print_arr(int a[],int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}

int main(){
  int a[] = {12,3,55,7,33,37,93,2,1};
  int len = sizeof(a)/sizeof(a[0]);

  print_arr(a,len);

  selection_sort(a,len);

  print_arr(a,len);

  return 0;
}
