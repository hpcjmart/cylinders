#include <stdio.h>

int main (int argc, char *argv[]) {
    int a,b,c = 0;
    int x,y,z = 0;
    int i;
    int diferencia;
    int comparable=0;
    int size=2*(atoi(argv[3])); //Tamaño del alfabeto
    FILE *vector1 = fopen(argv[1], "r");
    FILE *vector2 = fopen(argv[2], "r");


    while ((fscanf(vector1,"%d %d %d\n",&a,&b,&c)) != -1) {

      while ((fscanf(vector2,"%d %d %d\n",&x,&y,&z)) != -1) {
         comparable=0;
         if(a==x) {comparable=1;diferencia=c-z; printf("%d %d %d\n",a,b,diferencia);break;}

     } 
     if(comparable==0) {diferencia=9999999; printf("%d %d %d\n",a,b,diferencia);}
     rewind(vector2);

    }


    rewind(vector1);
    rewind(vector2);

    while ((fscanf(vector2,"%d %d %d\n",&x,&y,&z)) != -1) {

      while ((fscanf(vector1,"%d %d %d\n",&a,&b,&c)) != -1) {
         comparable=0;
         if(a==x) {comparable=1;break;}

     }
     if(comparable==0) {diferencia=9999999; printf("%d %d %d\n",x,y,diferencia);}
     rewind(vector1);

    }


    fclose (vector1);
    fclose (vector2);
    return 0;
}

