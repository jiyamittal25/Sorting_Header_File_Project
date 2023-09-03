#include "Sorting.h"
void bubbleSort(void *arr,int arr_size,int choice){
    for (int i = 0; i < arr_size - 1; i++) {
        for (int j = 0; j < arr_size - i - 1; j++) {
            if(choice==1){
                 int elem1= ((int *)arr)[j];
                 int elem2= ((int *)arr)[j+1];
                 if(elem1>elem2){
                     swap(&((int *)arr)[j],&((int *)arr)[j+1],choice);
                 }
            }
            else if(choice==2){
                char elem1=((char *)arr)[j];
                char elem2=((char *)arr)[j+1];
                    if(elem1>elem2){
                        swap(&((char *)arr)[j],&((char *)arr)[j+1],choice);
                    }
            } 
            else if(choice==3){
                long elem1= ((long *)arr)[j];
                long elem2= ((long *)arr)[j+1];
                if(elem1>elem2){
                    swap(&((long *)arr)[j],&((long *)arr)[j+1],choice);
                }
            }
            else if(choice==4){
                float elem1= ((float *)arr)[j];
                float elem2= ((float *)arr)[j+1];
                if(elem1>elem2){
                     swap(&((float *)arr)[j],&((float *)arr)[j+1],choice);
                }
            }
            else if(choice==5){
                double elem1= ((double *)arr)[j];
                double elem2= ((double *)arr)[j+1];
                if(elem1>elem2){
                    swap(&((double *)arr)[j],&((double *)arr)[j+1],choice);
                }
            }
        }
    }
}
