#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>


char noHp[12];
char pulsa[5][10] = {"5000","10000","20000","15000","50000"};
char pulsaInput[5];
int allPulsa[5] = {0};

void login();
int cekNomorHp();
void liatPulsa();
int cekPulsa();
void berhasil();
void daftarPulsa();


// Welcome to Input Buku :> \n

int main(){
    login();
    return 0;
}

void login(){
    printf("\nMasukan Nomor HP : ");
    gets(noHp);
    
    cekNomorHp();
    daftarPulsa();

    printf("\nMasukan pulsa : ");
    gets(pulsaInput);
    
    cekPulsa();
}

int cekNomorHp(){
    for (int i = 0; i < 12; i++){
        if(strlen(noHp) > 12 || strlen(noHp) < 11){
            printf("Nomor Hp yang dimasukan salah\n\n");
            login();
        }
    }
}

void liatPulsa(){
    int c = 1;

    printf("\n\t| total pulsa = %d", allPulsa[0]);

    printf("\n");
    exit(EXIT_SUCCESS);
}

int cekPulsa(){
    int length = sizeof(pulsa) / sizeof(char) / 10;    
    int a = 0;

    for(int i = 0;  i < length ; i++){
        if(strcmp(pulsaInput,pulsa[i]) != 0){
            
        }else{
            a += 1;
        }    
    }

    if(a >= 1){
        berhasil();
    }else{
        printf("Pulsa tidak ada\n\n");
        login();
    }
}

void berhasil(){
    int p = atoi(pulsaInput);
    allPulsa[0] += p;
    
    printf("\nSelamat transaksi berhasil\n");
    liatPulsa();
}

void daftarPulsa(){
    int length = sizeof(pulsa) / sizeof(char) / 10;
    int c = 1;

    printf("\nDaftar Pulsa :\n");

    for(int i = 0; i < length; i++){
        if(c == 2){
            printf("\t");
        }   
        printf("\t%d| %s",c, pulsa[i]);
        if(c%2 == 0){
            printf("\n");
        }
        c+=1;
    }
}