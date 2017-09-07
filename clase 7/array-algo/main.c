#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char auxiliar[51];//para tener 50 letras con el contra barra si esta "" se considera array de caracter
    strcpy(auxiliar,"hello death!");//se puede romper si es mas grande
    printf("%s\n",auxiliar);
    //printf(auxiliar);//imprime string
    strncpy(auxiliar,"hello corpse99999999999999999999999999999999999999999999888",49);//copia con limite de chars
    auxiliar[50] = '\0';//posicion limitada es necesario para limitar si se utiliza todo el string 0-50
    printf("tama%co  :%d \n%s\n",164,strlen(auxiliar),auxiliar);//el contra barra cero no cuenta

        printf("%d\n",strcmp("a","b"));
        printf("%d\n",strcmp("b","a"));
        printf("%d\n",strcmp("a","a"));
    //strcmpi();//no toma en cuenta mayus de minusculas
    //fflush(stdin);
    char buffer[4];
    char buffer2[40]= "hola";
    fgets(buffer,4,stdin);//donde queremos puntero a char donde guardar/ cantidad y donde estan esas cosas
    //scanf("%s\n",buffer);
    printf("%s\n",buffer);
    //printf("%s\n",buffer2);
    //isnumber()
    //isalfa()
    //atoi() string a int
    //atof() string a flotante
    return 0;
}
