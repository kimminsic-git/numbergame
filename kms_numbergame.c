#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number,count,userguess;
    srand(time(NULL));

            number=rand()%100+1;
            count=1;
    do
    {
        printf("1부터 100까지 숫자를 입력해주세요\n");
        scanf("%d",&userguess);

        if (userguess>number)
        {
            printf("%d 보다 작습니다\n", userguess);
        }

        else if(userguess<number)
        {
            printf("%d 보다 큽니다\n", userguess);
        }
        
        else
        {
            printf("정답니다 %d 회 시도",count);
        }
        
        count++;
    } while (number!=userguess);
    
    
    return 0;
}