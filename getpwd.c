#include <unistd.h>
#include <stdio.h>

int main()
{
    char buf[100];
       printf("%s\n",getcwd((buf),sizeof(buf)));
return 0;
}
