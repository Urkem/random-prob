#include <stdio.h>

void merge(int a[], int l, int mid, int r){
    int i,j,k;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int L[n1];
    int R[n2];

    for (i=0;i<n1;i++){
      L[i]=a[l+i];
    }
    for (j=0;j<n1;j++){
      R[j]=a[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
      a[k]=L[i];
      k++;
      i++;
    }

    while(j<n2){
      a[k]=R[j];
      k++;
      j++;
    }
}

void mergeSort(int a[],int l, int r){
    if(l<r){
      int mid = l+(r-l)/2; // overflow happends if its (l+r)/2
      mergeSort(a, l , mid);
      mergeSort(a, mid+1 , r);

      merge(a,l,mid,r);
    }
}

int main(){
    int a[] = {31,11,4,5,8,99,53,63,77,1};
    int size = sizeof(a)/sizeof(a[0]);
    int i;
    for(i = 0;i< size;i++){
      printf("%d ", a[i]);
    }
    printf("\n");

    mergeSort(a, 0, size-1);
    for(i = 0;i< size;i++){
      printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
