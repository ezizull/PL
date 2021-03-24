#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 1024

void hapus();
void home();

void hapus()
{
	system("pause");
    system("cls");
}

void home()
{	
	char kode[]="10370311";
	char NIM [max],kodenim[max];

	printf("Masukkan NIM : ");
	scanf("%s",NIM);
	
	memcpy(kodenim, &NIM[4],8);
	kodenim[9]='\0';
		
	if(strlen(NIM) <15)
		{
			printf("\nNIM harus 15 Digit ngab\n\n");
			hapus();
			return home();
		}
	else if(strlen(NIM) >15)
		{
			printf("NIM tidak boleh lebih dari 15 digit ngab\n\n");
			hapus();
			return home();
		}
		
	if (strcmp(kodenim,kode)==0)
		{
		printf("\nAnda Mahasiswa Umm\n\n");	
		hapus();
		return home();
		}
	else
		{
		printf("\nAnda Bukan Mahasiswa Umm\n\n");
	   	hapus();
		return home();	
		}
	
}
int main()
{
	home();
	return 0;
}