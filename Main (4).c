#include <stdio.h>

int main(int argc, char *argv[]) {
                int p,s,r,d=0,a=0;
                do{
                               scanf("%i %i %i",&p,&s,&r);
                }while(r>s);
                a=s;
                while(p>a){
                               a=a-r;
                               a=a+s;
                               d+=1;
                }
                d+=1;
                printf("%i",d);
                return 0;
}