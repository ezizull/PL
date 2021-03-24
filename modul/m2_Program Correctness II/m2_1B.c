#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>  

#define MAX 200

int cekName(char *inName), cekFrom(char * infrom), cekDate(char * date);
void list();
void verifikasi();

char book[MAX];
int CD = 0, CF = 0, CN = 0;

int main(){
    char inName[MAX], inFrom[MAX], name[MAX], pilih;
    char inDate[MAX];

    ulang:
    system("color B");
    while(1){
        fflush(stdin); 
        printf("\n");
        printf("\nWelcome Input your book :0");
        printf("\n\t1 | Input book");
        printf("\n\t2 | List book");
        printf("\n\t3 | Exit");

        printf("\n\n\t| saya pilih :> ");
        scanf("%d", &pilih);

        switch(pilih){
            case 1:
                printf("\n\t| Judul : ");
                scanf("%s", inName);
                
                printf("\t| From : ");
                scanf("%s", inFrom);

                tggl:
                printf("\t| Date : ");
                scanf("%s", inDate);
                cekDate(inDate);

                if(CD > 0){
                    CD = 0;
                    printf("\n\n");
                    goto tggl;
                }

                system("CLS");
                verifikasi();

                cekFrom(inFrom);
                printf("\n");
                cekName(inName);
                printf("\n");

                printf("\n\t| cek tanggal sukses :)\n");

                if(CN > 0){
                    printf("\n\t| terdapat nama yang sama :\\\n");
                }if(CF > 0 ){
                    printf("\n\t| terdapat from yang sama :\\\n");
                }if(CF >= 0 && CN >= 0 && CD == 0){
                    for(int i=0; i < 1; i++){
                        sprintf(book, "%s, %s. %s", inName, inFrom, inDate);
                        
                        fflush(stdin);
                    }
                    printf("\n\t| Menambahkan Buku Sukses :)\n");
                    list();
                    printf("\n");
                    // system("pause");
                    CF, CD, CN = 0;

                    goto ulang;
                }else if(CF > 0 && CN > 0 ){
                    printf("\n\t| input yang betul dong kakak :\\");
                    CF, CD, CN = 0; 
                    goto ulang;
                }
                break;
            case 2:
                list();
                break;
            case 3:
                exit(0);
                break;
            default:
                    printf("\n\t| input yang betul dong kakak :\\");
                    CF, CD, CN = 0; 
                    goto ulang;
        }
    }
    return 0;
}

int cekDate(char * date){
    char c[20];
    char y[20] = "y";
    char n[20] = "n";

    if(date >= "a" && date <= "z" || date >= "A" && date <= "Z"){
        printf("\n\t| input yang betul dong kakak :\\");
        CF, CN = 0;
        CD++;
    }

    // d >= -2147483648 && d <= 2147483647
    int d = atoi(date);
    if(d > 0 && d <= 2147483647){
        if (d > 2021){
            printf("\nsekarang masih 2021 sobat :|");
        }
        else if(d < 500){
            aneh:
            printf("\nyakin buku dgn tahun segini?");
            printf("\n\t| y/n : ");
            scanf("%s",c);
            if(strcmpi(c,"y") == 0){
                
            }else if(strcmpi(c, "n") == 0){
                CD++;
            }else{
                printf("\npilihannya cuma dua pintar!");
                goto aneh;
            }
        }
    }else{
        printf("\n\t| input yang betul dong kakak :\\");
        CF, CN = 0;
        CD++;
    }
}

int cekFrom(char *infrom){
    int length = sizeof(book) / sizeof(char) / MAX;
    char * pilih;
    char * mulai;
    char split;
    char * memory[MAX];
    int check = 0;

    if (book[0] != '\0' ){

        for(int i = 0; i < length; i++){
            mulai = strchr(&book[i], ',');
            mulai = strchr(mulai, ' ');
            pilih = strtok(mulai+1, ".");
            strcpy(&split, pilih);

            // printf("\n\t| %s", &split);
            
            // printf("\n\t| %s", split);
            // printf("\n\t| %d", strlen(&split));
            memory[i] = &split;
        }

        for(int i = 0; i < length; i++){
            if(strcmpi(memory[i], infrom) == 0){
                CN++;
                break;
            }else{
                check++;
            }
        }

        if(check > 0){
            printf("\n\t| cek from sukses :)");
        }
    }

}

int cekName(char *inName){
    int length = sizeof(book) / sizeof(char) / MAX;
    char * split;
    char * memory[20];
    int check = 0;

    if (book[0] != '\0' ){
        for(int i = 0; i < length; i++){
            split = strtok(&book[i], ","); // simpan dalam array
            
            memory[i] = split;
        }

        for(int i = 0; i < length; i++){
            if(strcmpi(inName, memory[i]) == 0){  // baru di strcmpi
                CN++;
                break;
            }else{
                check++;
            }
        }

        if (check > 0){
            printf("\n\t| cek nama sukses :)");
        }
    }

}

void list(){
    int length = sizeof(book) / sizeof(char) / MAX;
    printf("\n\t| %d", length);
    fflush(stdin);

    if (book[0] == '\0' ){
        printf("\n\t| list kosong kakak :)");
        main();
    }

    printf("\n");
    for(int i = 0; i < length; i++){
        printf("\t| %s", &book[i]);  
        fflush(stdin);
    }
}


void verifikasi() 
{ 
    system("color 0E"); 
  
    char a = 177, b = 219; 
  
    printf("\n"); 
    printf("\n\t\tMemverifikasi\n");
  
    printf("\t\t");
    // Print initial loading bar 
    for (int i = 0; i < 30; i++)
        printf("%c", a); 
  
    printf("\r"); // print return
    printf("\t\t"); 
  
    // Print loading bar progress 
    for (int i = 0; i < 30; i++) { 
        printf("%c", b); 
  
        // Sleep for 1 second 
        Sleep(1000); 
    }

    printf("\n\n");
} 