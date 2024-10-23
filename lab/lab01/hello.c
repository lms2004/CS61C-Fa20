#include <stdio.h>
void test(){
    int x  = 122;
    printf("%d\n",x);
}
int main(int argc, char *argv[]) {
    int i;
    int count = 0;
    int *p = &count;
    if(argc >= 2){
        for (int i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
            fflush(stdout);
        }
    }

    test(); 

    for (i = 0; i < 10; i++) {
        (*p)++; // Do you understand this line of code and all the other permutations of the operators? ;)
    }
 
    printf("Thanks for waddling through this program. Have a nice day.");
    fflush(stdout);
    return 0;
}