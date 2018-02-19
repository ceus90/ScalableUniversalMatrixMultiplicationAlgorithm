#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <memory.h>
#include <malloc.h>
#include <math.h>
#include <stddef.h>
#include <sys/time.h>
#include <mpi.h>

int main(int argc, char** argv)
{

        int A[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}, n =4;     //4*4 matrix
        printf("\nMatrix:\n");
        for (int i = 0; i<n; i++)       //Printing the whole matrix
        {
                for(int j =0; j<n; j++)
                        printf("%d\t",A[i*n+j]);
                printf("\n");
        }
        printf("\nOnly columns:\n");    //Printing the columns
        for(int j=0;j<n;j++)
        {       for (int i= 0; i<n;i++)
                        printf("%d\n",A[i*n+j]);
                printf("Column %d ends here\n",j+1);
        }
        printf("\nOnly rows:\n");       //Printing the rows
        for(int i = 0; i< n; i++)
        {
                for(int j=0;j<n;j++)
                        printf("%d\t",A[i*n+j]);
                printf("\nRow %d ends here\n",i+1);
        }
        return 0;
}