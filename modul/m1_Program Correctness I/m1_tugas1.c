#include <stdio.h>

int main()
{
    int arr[9]= {1,2,3,4,5,6,7,8,9};
    int i, ganjil=0, genap=0, total=0;
    
    for(i=0;i < 9;i++)
    {
        if(arr[i]%2 == 0){ genap++;}
        else{ganjil++;}
        total = arr[i];
    } 

    printf("Jumlah Bilangan Ganjil = %d\n", ganjil);
    printf("Jumlah Bilangan Genap = %d\n", genap);
    printf("Total = %d \n", total);

    return 0;
}