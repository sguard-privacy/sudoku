#include <stdio.h>
#include <stdlib.h>

 
char *gd_strdup(char const *s1) 
{
    int lens1=0;
    char *ret; 

    while(s1[lens1] != '\0')
        lens1++;
    ret = (char *)malloc(sizeof(char)*(lens1 +1));
    lens1 = 0;
    while(s1[lens1] != '\0'){
        //lens1 = 0
        //ret[0] = s1[0] => 'M'
        //lens1 = 1
        //ret[1] = s1[1] => 'y'
        //ret = "My" ... a la fin ret = "Myriam"
        ret[lens1] = s1[lens1];
        lens1++;
    }
    return(ret);
}

int main(void){
    char *s1 = "Myriam";
    char *s2 = gd_strdup(s1);
    printf("%s\n", s2);
    free(s2);
    printf("%s\n", s2);
}
