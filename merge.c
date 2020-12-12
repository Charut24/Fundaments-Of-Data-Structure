#include<stdio.h>

int main(int argc, char *argv[]){

        FILE *f1;

        FILE *f2;

        FILE *f3;

        char c;

        if(argc!=4){

                printf("\nError - merge-files command must have 3 arguments");

                return 0;

        }

        f1=fopen(argv[1],"r");

        f2=fopen(argv[2],"r");

        f3=fopen(argv[3],"w");

        if(f1==NULL){

                printf("\nsomething went wrong while opening %s",argv[1]);

                return 0;

        }

        if(f2==NULL){

                printf("\nsomething went wrong while opening %s",argv[2]);

                return 0;

        }

        if(f3==NULL){

                printf("\nsomething went wrong while opening %s",argv[3]);

                return 0;

        }

        while(fscanf(f1,"%c",&c)!=EOF){

                fprintf(f3,"%c",c);

        }

        while(fscanf(f2,"%c",&c)!=EOF){

                fprintf(f3,"%c",c);

        }

        printf("\nFiles Merge Completed.");

        fclose(f1);

        fclose(f2);

        fclose(f3);

        remove(argv[1]);

        remove(argv[2]);

        return 0;

}
