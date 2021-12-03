#include <stdio.h>
#include <string.h>

void reverse(char a[], int start, int end)
{
    int i = start;
    int j = end-1;
    while(i<j)
    {
        char temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++; j--;;
    }
}
void right_rotation(char a[],int len)
{
	int j = 0,i=0;
	while(j<len)
    {
        if(a[j]==' ')
        {
            if(j-i>1)
            {
                reverse(a,i,j);
            }
            i=j+1;
        }
        j++;
    }
    reverse(a,i,j);
}
void print(char arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main()
{
    //char a[]="Hello yogesh I am Shma";
    //char a[]="fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq";
    char a[]="Hello yogesh           I am Shma";
    char b[1000];
    int len = sizeof(a)/sizeof(a[0]);

    print(a,len);
    reverse(a,0,len);
    printf("\nreverse = \n");
    right_rotation(a,len);
    char *save;
    printf("%s:%d %s\n",__FILE__,__LINE__,a);
    char *token=strtok_r(a," ",&save);
    int i=0;
    printf("%s",a);
    while(token)
    {
       printf("%s:%d %s\n",__FILE__,__LINE__,token); 
        strncpy(b+i,token,strlen(token));
        i=i+strlen(token);
        //a[i]=' ';
        token=strtok_r(NULL," ",&save);
    }
    printf("%s",b);
    //print(b,len);

    printf("\n");
return 0;
}
