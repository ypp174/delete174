#include <stdio.h>
#include <string.h>

//int *left_rotation()
//{
//
//    
//}i
void reverse(char a[], int start, int end)
{
    int i = start;
    int j = end;
    while(i<j)
    {
        char temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++; j--;
    }
}
void right_rotation(char a[],int len)
{
	int j=0,i=0;
	while(j<len)
    {
        if(a[j]==' ')
        {
            if(j-i>1)
            {
                reverse(a,i,j-1);
            }
            i=j+1;
        }
        j++;
    }
    reverse(a,i,j-1);
}
void print(char arr[],int len)
{
    for(int i=0;i<=len;i++)
    {
       // printf("%c",arr[i]);
      //  printf("[%d-%c]\t",i,arr[i]);
       if(arr[i]=='\0')
        printf("%s:%d %s %d%c\n",__FILE__,__LINE__,"Yes",i,arr[i]);
    }
    printf("\n");
}
int main()
{
    //char a[]="Hello yogesh I am Shma";
    //char a[]="fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq";
    char a[]="ab cd ef gh";
    //int len = sizeof(a)/sizeof(a[0]);
    int len = strlen(a);

    //print(a,len);
    reverse(a,0,len-1);
    printf("%s:%d %s\n",__FILE__,__LINE__,a);
    //print(a,len);
    printf("\nreverse = \n");
    right_rotation(a,len);
    print(a,len);
    printf("%s:%d %s\n",__FILE__,__LINE__,a);
    printf("\n");
return 0;
}
