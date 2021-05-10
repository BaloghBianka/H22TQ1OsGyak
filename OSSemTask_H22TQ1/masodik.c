#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>




int main()

{

    srand(time(NULL));
    int fd;

    char * myfifo = "/tmp/myfifo";

    mkfifo(myfifo, 0666);
    
    int eredmeny;
    int vegeredmeny;
        fd = open(myfifo, O_WRONLY);
        eredmeny = rand() % (500 + 1 - 0) + 0;
        write(fd, &eredmeny, sizeof(eredmeny));
        close(fd);
		
        fd = open(myfifo, O_RDONLY);
        read(fd, &vegeredmeny, sizeof(vegeredmeny));

        printf("%d duplája: %d\n", eredmeny, vegeredmeny);
        close(fd);

        unlink(myfifo);

    return 0;

}
