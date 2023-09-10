void swap(void *a,void* b,int choice){

    //if choice is integer
    if(choice==1){
        int *elem1= (int *)a;
        int *elem2= (int *)b;
        if(*elem1 == *elem2){
            return;
        }
        *elem1= *elem1 + *elem2;
        *elem2= *elem1 - *elem2;
        *elem1= *elem1 - *elem2;
     }

    //if choice is character
     else if(choice==2){
         char *elem1= (char *)a;
         char *elem2= (char *)b;
         if(*elem1 == *elem2){
             return;
         }
         *elem1= *elem1 + *elem2;
         *elem2= *elem1 - *elem2;
         *elem1= *elem1 - *elem2;
    }

    //if choice is long
    else if(choice==3){
         long *elem1= (long *)a;
         long *elem2= (long *)b;
         if(*elem1 == *elem2){
             return;
         }
         *elem1= *elem1 + *elem2;
         *elem2= *elem1 - *elem2;
         *elem1= *elem1 - *elem2;
    }

    //if choice is float
    else if(choice==4){
        float *elem1= (float *)a;
        float *elem2= (float *)b;
        if(*elem1 == *elem2){
            return;
        }
        *elem1= *elem1 + *elem2;
        *elem2= *elem1 - *elem2;
        *elem1= *elem1 - *elem2;
    }

    //if choice is double
    else if(choice==5){
        double *elem1= (double *)a;
        double *elem2= (double *)b;
        if(*elem1 == *elem2){
            return;
        }
        *elem1= *elem1 + *elem2;
        *elem2= *elem1 - *elem2;
        *elem1= *elem1 - *elem2;
    }
}
