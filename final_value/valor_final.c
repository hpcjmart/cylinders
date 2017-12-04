#include <stdio.h>

int main (int argc, char *argv[]) {
    int a,b,c = 0;
    int i;
    int size=2*(atoi(argv[3])); //Tamaño del alfabeto
    FILE *vector = fopen(argv[1], "r");
    FILE *alfabeto = fopen(argv[2], "r");
    int haytres;
    char *test;

    test=(char *)malloc(sizeof(char)*size);

    while ((fscanf(vector,"%d %d %d\n",&a,&b,&c)) != -1) {

         int bytes = (size+1) * a;
         fseek (alfabeto, bytes, SEEK_SET);
         fgets(test, size, alfabeto);
         haytres=0;
         for(i=0;i<size;i++)
             if(test[i]=='3'){haytres=1;break;}
         if (haytres==0) printf("%d %d %d\n",a,b,c);
         rewind(alfabeto);

    }

    fclose (alfabeto);
    fclose (vector);
    return 0;
}

