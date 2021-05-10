#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

  
int main()

{
    int fd_1;
    char * myfifo = "/tmp/myfifo";
    mkfifo(myfifo, 0666);
    int eredmeny = 0;
        fd_1 = open(myfifo, O_RDONLY);
        read(fd_1, &eredmeny, sizeof(eredmeny));
        close(fd_1);
        printf("A kapott szám %d\n", eredmeny);
        int eredmeny = eredmeny + eredmeny;
        fd_1 = open(myfifo, O_WRONLY);
        write(fd_1, &vegeredmeny, sizeof(vegeredmeny));
        close(fd_1);
    return 0;
}
