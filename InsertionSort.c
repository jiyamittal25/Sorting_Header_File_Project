#include "Sorting.h"
void insertionSort(void* arr,int arr_size,int choice){
    for(int i=1;i<arr_size;i++){
        int a=i;
        for(int j=i-1;j>=0;j--){

            // if choice is integer
            if(choice==1){
                int elem1=((int *)arr)[a];
                int elem2=((int *)arr)[j];
                if(elem1<elem2){
                    swap(&((int *)arr)[a],&((int *)arr)[j],choice);
                    a=j;
                }
                else{
                    break;
                }
            }

            // if choice is character
            else if(choice==2){
                char elem1=((char *)arr)[a];
                char elem2=((char *)arr)[j];
                if(elem1<elem2){
                    swap(&((char *)arr)[a],&((char *)arr)[j],choice);
                    a=j;
                }
                else{
                    break;
                }
            }

            // if choice is long
            else if(choice==3){
                long elem1=((long *)arr)[a];
                long elem2=((long *)arr)[j];
                if(elem1<elem2){
                    swap(&((long *)arr)[a],&((long *)arr)[j],choice);
                    a=j;
                }
                else{
                    break;
                }
            }

            //// if choice is float
            else if(choice==4){
                float elem1=((float *)arr)[a];
                float elem2=((float *)arr)[j];
                if(elem1<elem2){
                    swap(&((float *)arr)[a],&((float *)arr)[j],choice);
                    a=j;
                }
                else{
                    break;
                }
            }

            // if choice is double
            else if(choice==5){
                 double elem1=((double *)arr)[a];
                 double elem2=((double *)arr)[j];
                 if(elem1<elem2){
                     swap(&((double *)arr)[a],&((double *)arr)[j],choice);
                     a=j;
                 }
                 else{
                     break;
                 }
            }
        }
    }
}
