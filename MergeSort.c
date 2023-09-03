#include<stdlib.h>
void merge(void* arr1,int l,int mid,int h,int choice){
    int n1=mid-l+1;
    int n2=h-mid;
    if(choice==1){
        int *arr=(int *)arr1;
        int* left=(int *)malloc(n1*sizeof(int));
        int* right=(int *)malloc(n2*sizeof(int));
        for(int i=0;i<n1;i++){
            left[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            right[i]=arr[mid+1+i];
        }
        int index=l;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(left[i]<right[j]){
                arr[index++]=left[i++];
            }
            else{
                arr[index++]=right[j++];
            }
        }
        while(i<n1){
            arr[index++]=left[i++];
        }
        while(j<n2){
            arr[index++]=right[j++];
        }
        free(left);
        free(right);
    }
    else if(choice==2){
        char *arr=(char *)arr1;
        char* left=(char *)malloc(n1*sizeof(char));
        char* right=(char *)malloc(n2*sizeof(char));
        for(int i=0;i<n1;i++){
            left[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            right[i]=arr[mid+1+i];
        }
	int index=l;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(left[i]<right[j]){
                arr[index++]=left[i++];
            }
            else{
                arr[index++]=right[j++];
            }
        }
        while(i<n1){
            arr[index++]=left[i++];
        }
        while(j<n2){
            arr[index++]=right[j++];
        }
        free(left);
        free(right);
    }
    else if(choice==3){
        long *arr=(long *)arr1;
        long* left=(long *)malloc(n1*sizeof(long));
        long* right=(long *)malloc(n2*sizeof(long));
        for(int i=0;i<n1;i++){
            left[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            right[i]=arr[mid+1+i];
        }
        int index=l;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(left[i]<right[j]){
                arr[index++]=left[i++];
            }
            else{
                arr[index++]=right[j++];
            }
        }
        while(i<n1){
            arr[index++]=left[i++];
        }
        while(j<n2){
            arr[index++]=right[j++];
        }
        free(left);
        free(right);
    }
    else if(choice==4){
        float *arr=(float *)arr1; 
        float* left=(float *)malloc(n1*sizeof(int));
        float* right=(float *)malloc(n2*sizeof(int));
        for(int i=0;i<n1;i++){
            left[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            right[i]=arr[mid+1+i];
         }
         int index=l;
         int i=0,j=0;
         while(i<n1 && j<n2){
            if(left[i]<right[j]){
                arr[index++]=left[i++];
            }
            else{
                arr[index++]=right[j++];
            }
         }
         while(i<n1){
             arr[index++]=left[i++];
         }
         while(j<n2){
             arr[index++]=right[j++];
         }
         free(left);
         free(right);
    }
    else if(choice==5){
        double *arr=(double *)arr1;
        double* left=(double *)malloc(n1*sizeof(double));
        double* right=(double *)malloc(n2*sizeof(double));
        for(int i=0;i<n1;i++){
            left[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            right[i]=arr[mid+1+i];
         }
         int index=l;
         int i=0,j=0;
         while(i<n1 && j<n2){
            if(left[i]<right[j]){
                arr[index++]=left[i++];
            }
            else{
                arr[index++]=right[j++];
            }
         }
         while(i<n1){
             arr[index++]=left[i++];
         }
         while(j<n2){
             arr[index++]=right[j++];
         }
         free(left);
         free(right);
    }
}
void mergeSort(void* arr,int l,int h,int choice){
    if(l<h){
         int mid=l+(h-l)/2;
         mergeSort(arr,l,mid,choice);
         mergeSort(arr,mid+1,h,choice);
         merge(arr,l,mid,h,choice);
     }
}
