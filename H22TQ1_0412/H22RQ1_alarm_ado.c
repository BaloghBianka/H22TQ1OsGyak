//
//  main.c
//  
//
//  Created by Balogh Bianka on 2021. 04. 12..
//


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>

int main(int argc, char **argv)
{
    int pid;

    if (argc < 1)
    {
        perror(" Nincs kinek");
        exit(1);
    }

    pid = atoi(argv[1]);

    kill(pid, SIGALRM);
}    


