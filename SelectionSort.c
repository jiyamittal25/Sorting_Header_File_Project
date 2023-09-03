#include "Sorting.h"
void selectionSort(void *arr,int arr_size,int choice){
    for(int i=0;i<arr_size-1;i++){
         int min=i;
         if(choice==1){
              for(int j=i+1;j<arr_size;j++){
                  int elem1 = ((int *)arr)[min];
                  int elem2= ((int *)arr)[j];
                  if(elem1>elem2){
                      min=j;
                  }
              }
              if(min!=i){
                   swap(&((int *)arr)[min],&((int *)arr)[i],choice);
              }
        }
        else if(choice==2){
            for(int j=i+1;j<arr_size;j++){
               char elem1 = ((char *)arr)[min];
               char elem2= ((char *)arr)[j];
               if(elem1>elem2){
                   min=j;
               }
            }
            if(min!=i){
                swap(&((char *)arr)[min],&((char *)arr)[i],choice);
            }
        }
        else if(choice==3){
             for(int j=i+1;j<arr_size;j++){
                  long elem1 = ((long *)arr)[min];
                  long elem2= ((long *)arr)[j];
                  if(elem1>elem2){
                      min=j;
                  }
             }
             if(min!=i){
                 swap(&((long *)arr)[min],&((long *)arr)[i],choice);
             }
        }
        else if(choice==4){
             for(int j=i+1;j<arr_size;j++){
                 float elem1 = ((float *)arr)[min];
                 float elem2= ((float *)arr)[j];
                 if(elem1>elem2){
                     min=j;
                 }
             }
             if(min!=i){
                 swap(&((float *)arr)[min],&((float *)arr)[i],choice);
             }
        }
        else if(choice==5){
            for(int j=i+1;j<arr_size;j++){
                double elem1 = ((double *)arr)[min];
                double elem2= ((double *)arr)[j];
                    if(elem1>elem2){
                        min=j;
                    }
            }
            if(min!=i){
                swap(&((double *)arr)[min],&((double *)arr)[i],choice);
            }
        }
    }
}
