#include<stdio.h>
int main(){
    int M[3];
    float bmi[3],T[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter The Weight for patient of index %d\n",i);
        scanf("%d",&M[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Enter The height for patient of index %d\n",i);
        scanf("%f",&T[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        bmi[i]=M[i]/(T[i]*T[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (bmi[i]<18.5)
        {
            printf("The Patient of index %d is Underweighted\n",i);
        }
        else if (bmi[i]>25)
        {
            printf("The Patient of index %d is Overweighted\n",i);
        }
        else
        {
            printf("The Patient of index %d is Healthy\n",i);
        }
        
        
    }
    
    return 0;
    
    
}