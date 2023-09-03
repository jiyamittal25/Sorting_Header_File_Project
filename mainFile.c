#include<stdio.h>
#include<stdlib.h>
#include "Sorting.h"
int main(){
    int datatype_choice;
    printf("Enter 1 for Array of  Integer Datatype.\nEnter 2 for Array of  Character  Datatype.\nEnter 3 for Array of  Long Datatype.\nEnter 4 for Array of  Float Datatype. \nEnter 5 for Array of  Double Datatype.\n");
    scanf("%d",&datatype_choice);
    printf("\n");
    int sort_choice;
    printf("Enter 1 to use Selection Sort.\nEnter 2 to use Bubble Sort.\nEnter 3 to use Insertion Sort.\nEnter 4 to use Merge Sort.\nEnter 5 to use Quick Sort.\n");
    scanf("%d",&sort_choice);
    printf("\n");
    int size;
    printf("Enter the size of Array : ");
    scanf("%d",&size);
    printf("Enter the Elements of Array: ");
    if(datatype_choice==1){
            int *arr_of_int = (int *)malloc(size*sizeof(int));
            for(int i=0;i<size;i++){
                scanf("%d",&arr_of_int[i]);
            }
            printf("Sorted Array\n");
            switch(sort_choice){
                case 1:
                    selectionSort(arr_of_int,size,datatype_choice);
                    break;
                case 2:
                    bubbleSort(arr_of_int,size,datatype_choice);
                    break;
                case 3:
                    insertionSort(arr_of_int,size,datatype_choice);
                    break;
                case 4:
                    mergeSort(arr_of_int,0,size-1,datatype_choice);
                    break;
                case 5:
                    quickSort(arr_of_int,0,size-1,datatype_choice);
                    break;
                default:
                    printf("Invalid Choice for Sorting Algorithm!\n");
            }
            for(int i=0;i<size;i++){
                printf("%d ",arr_of_int[i]);
            }
            printf("\n");
            free(arr_of_int);
        }
        else if(datatype_choice==2){
            char* arr_of_char=(char *)malloc(size*sizeof(char));
            for(int i=0;i<size;i++){
                scanf(" %c",&arr_of_char[i]);
            }
            printf("Sorted Array\n");
            switch(sort_choice){
                case 1:
                    selectionSort(arr_of_char,size,datatype_choice);
                    break;
                case 2:
                    bubbleSort(arr_of_char,size,datatype_choice);
                    break;
                case 3:
                    insertionSort(arr_of_char,size,datatype_choice);
                    break;
                case 4:
                    mergeSort(arr_of_char,0,size-1,datatype_choice);
                    break;
                case 5:
                    quickSort(arr_of_char,0,size-1,datatype_choice);
                    break;
                default:
                    printf("Invalid Choice for Sorting Algorithm!\n");
            }
            for(int i=0;i<size;i++){
                printf("%c ",arr_of_char[i]);
            }
            printf("\n");
            free(arr_of_char);
        }
        else if(datatype_choice==3){
            long* arr_of_long=(long *)malloc(size*sizeof(long));
            for(int i=0;i<size;i++){
                scanf("%ld",&arr_of_long[i]);
            }
            printf("Sorted Array\n");
            switch(sort_choice){
                case 1:
                    selectionSort(arr_of_long,size,datatype_choice);
                    break;
                case 2:
                    bubbleSort(arr_of_long,size,datatype_choice);
                    break;
                case 3:
                    insertionSort(arr_of_long,size,datatype_choice);
                    break;
                case 4:
                    mergeSort(arr_of_long,0,size-1,datatype_choice);
                    break;
                case 5:
                    quickSort(arr_of_long,0,size-1,datatype_choice);
                    break;
                default:
                    printf("Invalid Choice for Sorting Algorithm!\n");
            }
            for(int i=0;i<size;i++){
                printf("%ld ",arr_of_long[i]);
            }
            printf("\n");
            free(arr_of_long);
        }
        else if(datatype_choice==4){
            float* arr_of_float=(float *)malloc(size*sizeof(float));
            for(int i=0;i<size;i++){
                scanf("%f",&arr_of_float[i]);
            }
            printf("Sorted Array\n");
            switch(sort_choice){
                case 1:
                    selectionSort(arr_of_float,size,datatype_choice);
                    break;
                case 2:
                    bubbleSort(arr_of_float,size,datatype_choice);
                    break;
                case 3:
                    insertionSort(arr_of_float,size,datatype_choice);
                    break;
                case 4:
                    mergeSort(arr_of_float,0,size-1,datatype_choice);
                    break;
                case 5:
                    quickSort(arr_of_float,0,size-1,datatype_choice);
                    break;
                default:
                    printf("Invalid Choice for Sorting Algorithm!\n");
            }
            for(int i=0;i<size;i++){
                printf("%f ",arr_of_float[i]);
            }
            printf("\n");
            free(arr_of_float);
        }
        else if(datatype_choice==5){
            double* arr_of_double=(double *)malloc(size*sizeof(double));
            for(int i=0;i<size;i++){
                scanf("%lf",&arr_of_double[i]);
            }
            printf("Sorted Array\n");
            switch(sort_choice){
                case 1:
                    selectionSort(arr_of_double,size,datatype_choice);
                    break;
                case 2:
                    bubbleSort(arr_of_double,size,datatype_choice);
                    break;
                case 3:
                    insertionSort(arr_of_double,size,datatype_choice);
                    break;
                case 4:
                    mergeSort(arr_of_double,0,size-1,datatype_choice);
                    break;
                case 5:
                    quickSort(arr_of_double,0,size-1,datatype_choice);
                    break;
                default:
                    printf("Invalid Choice for Sorting Algorithm!\n");
            }
            for(int i=0;i<size;i++){
                printf("%lf ",arr_of_double[i]);
            }
            printf("\n");
            free(arr_of_double);
        }
        else{
            printf("Invalid Choice for Datatype.\n");
        }
    return 0;
}
