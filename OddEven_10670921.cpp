#include <iostream>
#include <mpi.h>
using namespace std;

int main(int argc, char *argv[])
    {
        int rank, size;
        MPI_Init(&argc, &argv);
        rank=MPI::COMM_WORLD.Get_rank();
        size = MPI::COMM_WORLD.Get_size();
        if(rank%2==0){
            cout<<"Process " << rank << " says I am even" <<endl;
        }else{
            cout << "Process " <<rank << " says I am odd" <<endl;
        }
        MPI_Finalize();
        return 0;
    }