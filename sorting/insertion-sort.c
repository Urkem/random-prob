#include <stdio.h>

void insertion_sort(int a[], int n){
  int i,temp,l,k;
  for(i=1;i<n;i++){
    l = i-1;
    k = i;
    while((a[k]<a[l]) && (l>=0)){
      temp = a[l];
      a[l] = a[k];
      a[k] = temp;
      l--;
      k--;
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

  insertion_sort(a,len);

  print_arr(a,len);

  return 0;

}
