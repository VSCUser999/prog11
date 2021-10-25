#include <stdio.h>

int Func(int);

int main (void){
    int n1,n2, m = 0;

    scanf("%d %d",&n1,&n2);

    while(n1 <= n2){
        m = Func(n1);
        if (m == 1) printf("%d ",n1);
        n1++;
    }
    printf("\n");
}

int Func(int n){
    int  k = 1, j = 2;

    while(k != 0){

        if(n == 1){
            k = 0;
            break;
        }

        if(n == 2){
            k = 1;
            break;
        }

        k = n % j;
        j++;

       if(j >= n)
        break;
    }

    if(k == 0)
        return 0;
    else
        return 1;
}