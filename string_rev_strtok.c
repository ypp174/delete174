#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
//char *a=strdup("fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq");
char *a=strdup("ab    cd         ef  klkl");
char *token = NULL;
char x[100][1000];
int i = strlen(a);
char *b=(char *)malloc(i);
int tlen = 0;
printf("%s",a);
char *save=NULL;
token=strtok_r(a," ",&save);
while(token)
{
printf("%s:%d %s\n",__FILE__,__LINE__,token);
    tlen=strlen(token);
    strncpy(&b[i-tlen],token,tlen);
    i = i-tlen-1;
    if(i>=0)
        b[i]=' ';
    token=strtok_r(NULL," ",&save);
}
printf("\n%s",b);
printf("\n");
return 0;
}
