#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main ()
    {
    time_t start;
    time_t end;

    int Ncirc = 0;
    int num_trials = 100000000;
    double pi, x, y;
    double r = 1.0;  

    start = time(NULL);
    //add code here
    #pragma omp parallel for private (x, y) reduction (+:Ncirc)
    //
    for(int i=0; i<num_trials; i++)
    {
        x = ((double) rand() / (RAND_MAX));
        y = ((double) rand() / (RAND_MAX));
        if ((x*x + y*y) <= r*r) 
        {
            Ncirc++;
        }    
    }
    end = time(NULL); 

    printf("took %ld seconds to process\n", end - start); 
    pi = 4.0 * ((double)Ncirc/(double)num_trials);
    printf("\n %d trials, pi is %f \n",num_trials, pi);
    }