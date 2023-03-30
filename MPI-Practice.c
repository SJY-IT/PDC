#include <stdio.h>
#include <string.h>
#include <mpi.h>

int main(void) {
    int comm_sz;
    int my_rank;
    int my_val[5];
    
    MPI_Init(NULL, NULL);
    MPI_Comm_size(MPI_COMM_WORLD, &comm_sz);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
    
    if (my_rank != 0) {
        my_val[0] = 500;
        my_val[1] = 2300;
        MPI_Send(my_val, 2, MPI_INT, 0, 99, MPI_COMM_WORLD);
    } else {
        MPI_Recv(my_val, 2, MPI_INT, 1, 99, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        printf("Received Value:");
        for(int i=0; i < 2; i++) {
            printf(" %d ", my_val[i]);
        }
    }    

    MPI_Finalize();
return 0;
}
