#include<stdio.h>
#include<string.h>

int cadastro_validacao (char* senha) {

    int az = 0;   
    int AZ = 0; 
    int numero = 0;
    int i;

    if (strlen(senha) > 5 ){

        for(i=0; i < strlen(senha); i++){
            if (senha[i] >= 96 && senha[i] <= 122){
                az = 1;
            }
            if (senha[i] >= 65 && senha[i] <=90){
                AZ = 1;
            }
            if (senha[i] >=48 && senha[i] <= 57){
                numero = 1;
            }
        }

        if (az == 0 || AZ == 0 || numero == 0){
            return 0;
        } else {
            return 1;
        }

    } else {
        return 0;
    }

}