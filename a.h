#include <stdio.h>

void* shmalloc(size_t size,char *name)
{
FILE *fp = shm_open(name,O_RW);
ftruncate(fp,size);
return mmap(NULL,fp,PORT_WRITE|PORT_READ,MAP_SHARED,0);
}

typedef struct node
{
    sem_t *sem1;
    sem_t *sem2;
    char *buff;
}node;


