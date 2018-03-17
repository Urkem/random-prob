#include <stdio.h>

int partition(int a[], int lo, int hi) {

    int pivot = a[hi];


    int k,temp;
    int i = lo -1;
    for(k=lo;k<hi;k++){
      if(a[k]< pivot){
        i++;
        temp = a[k];
        a[k] = a[i];
        a[i] = temp;
      }
    }

    temp = a[i+1];
    a[i+1]= a[hi];
    a[hi] = temp;

    return i+1;
}

void quick_sort(int a[],int lo,int hi){
    if(lo<hi){
      int  p = partition(a,lo,hi);
      quick_sort(a, lo, p-1);
      quick_sort(a, p+1, hi);
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

  quick_sort(a,0,len);

  print_arr(a,len);

  return 0;
}
