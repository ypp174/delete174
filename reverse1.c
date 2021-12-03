#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *a,char *b)
{
if(a==NULL)
{
    printf("%s:%d %s\n",__FILE__,__LINE__,__FUNCTION__);
    return;
}
else
{
    char *token = strtok_r(a," ",&a);
    printf("%s:%d %s\n",__FILE__,__LINE__,token);
    //reverse(a+(strlen(token)),b);
    reverse(NULL,b);
    printf("%s:%d %s\n",__FILE__,__LINE__,token);
    strncat(b,token,strlen(token));
}
}

int main()
{
//char *a=strdup("fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq");
char *a=strdup("ab cd ef");
char b[100]="";
reverse(a,b);
printf("\n%s",b);
printf("\n");
return 0;
}
