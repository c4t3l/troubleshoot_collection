#include <sys/resource.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Define and create object of struct
    // rlimit
    struct rlimit rl;

    // Get the limit on memory
    getrlimit (RLIMIT_AS, &rl);
    printf("\n Default value is : %11d\n", (long long int)rl.rlim_cur);
    
    // Try to allocate more mem than set limit
    //char *ptr = NULL;
    int *ptr = NULL;
    //ptr = (int*) malloc(23068672);  //allocate 22MiB
    ptr = (int*) malloc(46137344);  //allocate 44MiB
    //ptr = (int*) malloc(3221225472);
    if(NULL == ptr)
    { 
        printf("\n Memory allocation failed\n");
        return -1;
    }


    //free(ptr);
    return 0;
}
