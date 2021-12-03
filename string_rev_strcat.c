#include<stdio.h>
#include<string.h>

int main()
{
//char a[]="ab cd ef gh glklklklklklklk";
char a[]="fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq";
char b[100]="";
int len = strlen(a);
int end = -1,i,j=0;
printf("%s\n",a);
i=len-1;
//start from right to left
while(i>=0)
{
    if(a[i]!=' ' && end == -1)
    {
        end = i;
    }
    if(a[i]==' ' && end != -1)   //to avoid contineous spaces
    {
        strncpy(&b[j],&a[i+1],end-i);
        j=j+end-i;
        b[j++]=' ';
        end = -1;
        while(a[i]==' ')
        {
            i--;
        }
    }
    else
        i--;   
}
        if(end !=-1)
        strncat(&b[j],a,end+1);
        b[j+end+1]='\0';
    printf("%s",b);
printf("\n");
return 0;
}
