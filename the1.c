#include <stdio.h>
#define W_INDEX 0
#define H_INDEX 1
#define T_INDEX 2
#define P_INDEX 3
#define S_INDEX 4
#define A_INDEX 5
#define N_INDEX 6


int main()
{
    long int length,number_of_tribes,i,j,k;
    long int arr[100000];
    scanf("%ld",&length);
    scanf("%ld",&number_of_tribes);
    for(j=0; j<(100000); j++)
    {
        arr[j]=1;
    }
    for(i=0; i<number_of_tribes; i++)
    {   
        long int i,j;
        long int width,height,time_of_first_attack,position_ofleft,speed,attack_interval,number_of_attacks;
        scanf("%ld",&width);
        scanf("%ld",&height);
        scanf("%ld",&time_of_first_attack);
        scanf("%ld",&position_ofleft);
        scanf("%ld",&speed);
        scanf("%ld",&attack_interval);
        scanf("%ld",&number_of_attacks);
        for(j=0; j<number_of_attacks; j++)
        {   
            if(j!=0)
            {
                position_ofleft+=speed*attack_interval;
            }
            for(i=0; i<width; i++)
            {
                if((position_ofleft+i)<0)
                {
                    continue;
                }
                if((position_ofleft+i)>100000)
                {
                    continue;
                }
                if(arr[position_ofleft+i]<height)
                {
                    arr[position_ofleft+i]=height;
                }
            }
            
        }
    }
    for(k=0; k<(length+1); k++)
    {   if(k==length)
        {
            printf("%ld",arr[k]);
        }
        else
            printf("%ld ",arr[k]);
    }
    printf("\n");
    
    return 0;
}







