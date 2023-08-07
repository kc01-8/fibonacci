#include <stdio.h>

int Fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return Fib(n-1) + Fib(n-2);
    }
}

int main(){
    int i;
    int tn;
    char ta = 'n';

    printf("Print the Fibonacci sequence x times (enter a number):\n");
    scanf("%d", &tn);
    printf("\nYou chose %d times.\n", tn);
    printf("Print each as a new line? (default in one line, y / n):\n");
    scanf(" %c", &ta);

    if(ta == 'y' || ta == 'Y'){
        printf("1\n");
        for (i = 2; i < tn+1; i++){
            int j = Fib(i);
            printf("%d\n", j);
        }
    } else{
        printf("1, ");
        for (i = 2; i < tn+1; i++){
            int j = Fib(i);
            printf("%d, ", j);
        }
    }

    return 0;
}
