#include <stdio.h>
#include <unistd.h>


main()
{
    for(;;) 
    {
        FILE *pFile = fopen("/var/log/messages", "a");
        fprintf(pFile, "%s", "Hello Service Message: Hello World!\n");
        fclose(pFile);
        sleep(5);
    }

} 
