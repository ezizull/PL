#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define max 1024

char username[max];
char select[max];

void menu(){
    ulang:
    printf("\nmasukan username: ");
    scanf("%s", username);
    
    if (strlen(username) < 15){
        printf("\n\t| username kurang dari 15 digit  :(\n");
        goto ulang;
    }
    else if (strlen(username) > 15)
    {
        printf("\n\t| username lebih dari 15 digit  :(\n");
        goto ulang;
    }

    // 202010370311203
    memcpy (select, &username[4],8)

    if (strcmp(select, "10370311") == 0){
        printf("\n\t| selamat anda berhasil login :)");
    }else{
        printf("\n\t| anda bukan bagian dari kami enyahlah :v");
    }
}

int main(){

    printf("\n");
    menu();
    printf("\n");
    
    return 0;
}