#include <sys/resource.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This program allocates 512MiB of memory then waits for exit

int main()
{
    // Define and create object of struct
    // rlimit
    struct rlimit rl;

    // Get the limit on memory
    getrlimit (RLIMIT_AS, &rl);
    printf("Allocating 512MiB of memory\n");
    
    // Try to allocate more mem than set limit
    //char *ptr = NULL;
    printf("Press enter to continue...\n");
    int i;
    for (i=0; i<3; i++)
    fork();
    
    int *ptr = NULL;
    ptr = (int*) malloc(536870912); //allocate 512MiB 
    

    getchar();
    free(ptr);
    return 0;
}
