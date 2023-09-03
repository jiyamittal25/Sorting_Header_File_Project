#include "Sorting.h"
int partition(void* arr1,int l,int h,int choice){
    if(choice==1){
        int *arr=(int *)arr1;
        int pivot=arr[h];
        int i=l-1;
        for(int j=l;j<=h-1;j++){
            if(arr[j]<pivot){
                i++;
                swap(&arr[i],&arr[j],choice);
            }
        }
        swap(&arr[i+1],&arr[h],choice);
        return (i+1);
    }
    else if(choice==2){
        char *arr=(char *)arr1;
        char pivot=arr[h];
        int i=l-1;
        for(int j=l;j<=h-1;j++){
            if(arr[j]<pivot){
                i++;
                swap(&arr[i],&arr[j],choice);
            }
        }
        swap(&arr[i+1],&arr[h],choice);
        return (i+1);
    }
    else if(choice==3){
        long *arr=(long *)arr1;
        long pivot=arr[h];
        int i=l-1;
        for(int j=l;j<=h-1;j++){
            if(arr[j]<pivot){
                i++;
                swap(&arr[i],&arr[j],choice);
            }
        }
        swap(&arr[i+1],&arr[h],choice);
        return (i+1);
    }
    else if(choice==4){
        float *arr=(float *)arr1;
        float pivot=arr[h];
        int i=l-1;
        for(int j=l;j<=h-1;j++){
            if(arr[j]<pivot){
                i++;
                swap(&arr[i],&arr[j],choice);
            }
        }
        swap(&arr[i+1],&arr[h],choice);
        return (i+1);
    }
    else if(choice==5){
        double *arr=(double *)arr1;
        double pivot=arr[h];
        int i=l-1;
        for(int j=l;j<=h-1;j++){
            if(arr[j]<pivot){
                i++;
                swap(&arr[i],&arr[j],choice);
            }
        }
        swap(&arr[i+1],&arr[h],choice);
        return (i+1);
    }
}
void quickSort(void* arr,int l,int h,int choice){
    if(l<h){
        int p=partition(arr,l,h,choice);
        quickSort(arr,l,p-1,choice);
        quickSort(arr,p+1,h,choice);
    }
}
