#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[]){

        FILE *f1;

        FILE *f2;

        char c;

        if(argc!=3){

                printf("\nError - rename-file command must have 2 arguments.");

                return 0;

        }

        f1=fopen(argv[1],"r");

        f2=fopen(argv[2],"w");

        if(f1==NULL){

                printf("\nSomething went wrong while opening %s",argv[1]);

                return 0;

        }

        if(f2==NULL){

                printf("\nSomething went wrong while opening %s",argv[2]);

                return 0;

        }

        while(fscanf(f1,"%c",&c)!=EOF){

                fprintf(f2,"%c",c);

        }

        fclose(f1);

        fclose(f2);

        remove(argv[1]);

        printf("\nFile Successfully renamed.");

        return 0;

}
