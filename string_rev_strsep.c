#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char *a=strdup("fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq");
//char *a=strdup("ab cd");
char *token = NULL;
int i = strlen(a);
char *b=(char *)malloc(i);
int tlen = 0;
printf("%s",a);
while((token=strsep(&a," "))!=NULL)
{
    tlen=strlen(token);
    strncpy(&b[i-tlen],token,tlen);
    i = i-tlen-1;
    if(i>=0)
        b[i]=' ';
}
printf("\n%s",b);
printf("\n");
return 0;
}
