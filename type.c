#include<stdio.h>

int main(int argc, char *argv[])
{

        FILE *f1;

        char c;

        if(argc!=2){

                printf("\nError - type-file command must have 1 argument.");

                return 0;

        }

        f1=fopen(argv[1],"r");

        if(f1==NULL){

                printf("\nsomething went wrong while opening %s",argv[1]);

                return 0;

        }

        printf("\n");

        while(fscanf(f1,"%c",&c)!=EOF){

                printf("%c",c);

        }

        fclose(f1);

        return 0;

}
