#include <stdio.h>

int main (int argc, char *argv[]) {
    int a,b,c = 0;
    int size=2*(atoi(argv[3])); //Tamaño del alfabeto
    FILE *vector = fopen(argv[1], "r");
    FILE *alfabeto = fopen(argv[2], "rw+");
    char *test;
    int valor1=atoi(argv[4]);
    int valor2=atoi(argv[5]);
    int valor3=atoi(argv[6]);
    int valor4=atoi(argv[7]);
    int valor5=atoi(argv[8]);
    char p;

    test=(char *)malloc(sizeof(char)*size); 
    test[0]='z';

    while ((fscanf(vector,"%d %d %d\n",&a,&b,&c)) != -1) {

       if((c==valor1)||(c==valor2)||(c==valor3)||(c==valor4)||(c==valor5)) {
    
            
            printf("Voy a escribir borrar %d %d \n",c,valor1);
            int bytes = (size+1) * a;
            fseek (alfabeto, bytes, SEEK_SET);
            fputs (test, alfabeto);
            rewind(alfabeto);

         }
         

    }


    fclose (alfabeto);
    fclose (vector);
    return 0;
}


