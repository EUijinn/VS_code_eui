#include<stdio.h>
#define SIZE 100
int ft_strlen(char s[]);

int main(void)
{
    char s[SIZE];
    int len;
    int Id;
    int age;

    printf("학번을 입력하시오.\n");
    scanf("%s", s);
    //printf("%ld");
    
    //10자리인지 확인 
    if(ft_strlen(s)!=10)
    {
        printf("학번은 10자리입니다. 프로그램을 종료합니다.\n");
        return 1;
    }


    //s[2] 0또는 1 || true
    //s[2] 2 일때 s[3] 0 || 1
    if(
        s[2]=='0'||s[2]=='1'||
        (s[2]=='2'&&(s[3]=='0'||s[3]=='1'))
        )
        printf("당신의 학번은 %c%c학번입니다!\n", s[2],s[3]);


    else
    {   
        printf("프로그램을 종료합니다.\n");

        return 1; 

    }

    //학번이 낮을수록 나이는 증가. 나이: 21-학번+20=41-학번 
    //00학번~09학번 
    //10학번~21학번
    //Id=2인덱스와3인덱스
    //(48)*10+''=01 | 49*10+'1'=11학번
    //나이=41-(48)
    //Id의 십의 자리수를 문자로 변환, 일의 자리수를 문자로 변환. 


    Id=(s[2]-48)*10+(s[3]-48);
    if(0<=Id&&Id<=21)
    {
        age=41-Id; 
        printf("2021년 당신의 나이는 %d입니다.\n",age);
    }

    else
    {
        printf("당신의 학번을 다시 확인하시오. 프로그램을 종료합니다.\n");
        
        return 1;

    }

    return 0; 
}

int ft_strlen(char s[])
{
    int len;

    len=0;
    while(s[len]!='\0')
        len++;

    return len;
}

