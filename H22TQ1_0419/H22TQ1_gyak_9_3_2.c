//
//  main.c
//  H22TQ1_gyak_9_3_2
//
//  Created by Balogh Bianka on 2021. 04. 29..
//

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <signal.h>

void AlarmHandler(int sig);

int main(void)
{
    if (signal(SIGALRM, AlarmHandler) == SIG_ERR)
    {
        printf("Nem sikerult handlert allitani a(z) \"SIGALRM\" jelre!\n");
        return 1;
    }

    pause();
    return 0;
}

void AlarmHandler(int sig)
{
    printf("H22TQ1\nMostantol nem blokkolodok!\n");
    exit(1);
}
