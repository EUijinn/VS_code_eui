//포인터 개념
/*#include<stdio.h>
int main()
{
    char a[6]="Hello";
    char *b="World";

    int i;

    i=0;
    //printf("%s\n", a);
    while(a[i]!='\0')
    {
        printf("%c\n",a[i]);
        i++;
    }

    while(*b !='\0')
    {
        printf("%c\n", *b);
        *b++;
    }

    return 0;

}*/

//이중포인터

//argc, ||
#include<stdio.h>
#define SIZE 100
int ft_strlen(char s[]);

int main(int *argc, char **argv, char **envp)
{
    printf("%d\n",argc);
    while
}