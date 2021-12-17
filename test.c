#include<stdio.h>
#include<windows.h>

void main()
{
    int i = 0;//行
    int j = 0;//星号
    int k = 0;//空格
    int line = 0;//上半部分的高度line，是奇数，下班部分的高度就是line-1
    printf("请输入菱形上半部分的高度：");
    scanf("%d", &line);
    if(line % 2 == 1)
    {
	for(i = 1; i <= line; i++)
	{
 	    for(k = 1; k <= line - i; k++)
	    {
		printf(" ");
	    }
	    for(j = 1; j <= 2 * i - 1; j++)
	    {
		if(j == 1 || j == 2 * i - 1)
		{
		    printf("*");
		}	
		else
		{
		    printf(" ");
		}	
	    }
  	    printf("\n");
	}
	for(i = 1; i <= line - 1; i++)
	{
	    for(k = 1; k <= i; k++)
  	    {
		printf(" ");
	    }
	    for(j = 1; j <= 2 * (line - 1 - i) + 1; j++)
	    {
		if(j == 1 || j == 2 * (line - 1 - i) + 1)
		{
		    printf("*");
		}	
		else
		{
		    printf(" ");
		}	
	    }
	    printf("\n");
	}
    }
    else
    {
	printf("请输入奇数");
    }
    system("pause");
}