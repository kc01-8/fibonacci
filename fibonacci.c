#include <stdio.h>
int i;
int tnd;
char tta;

int main(){
    printf("Print the fibonacci sequence x times (enter a number):\n");
    scanf("%d", &tnd);
    printf("\nYou chose %d times.\n", tnd);
    printf("Print each as a new line? (default in one line, y / n):\n");
    scanf("%d", &tta);

    if(tta == 'y'){
        printf("1\n");
        for (i = 2; i < tnd+1; i++){
            int j = i - 1 + i - 2;
            printf("%d\n", j);
        }
    } else{
        printf("1, ");
        for (i = 2; i < tnd+1; i++){
            int j = i - 1 + i - 2;
            printf("%d, ", j);
        }
    }
}


/*
The above program has some extra features
The program below simply prints the sequence 100 times on a new line

#include <stdio.h>
int i;

int main(){
        printf("1\n");
        for (i = 2; i < 101; i++){
            int j = i - 1 + i - 2;
            printf("%d\n", j);
        }
}

*/
