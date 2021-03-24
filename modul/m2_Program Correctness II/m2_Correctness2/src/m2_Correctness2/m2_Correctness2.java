/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package m2_Correctness2;

import java.util.*;

public class m2_Correctness2 {

    Scanner scanf = new Scanner (System.in);
    String noHp;
    String pulsa[] = {"5000", "10000", "15000", "20000", "50000"}; // 10 kesamping 5 kebawah
    String pulsaInput; //maksimal penginputan total pulsa diatas
    int allPulsa;

    void login(){
        System.out.print("Masukkan Nomor HP Anda : ");
        this.noHp = scanf.next();//membersihkn memory yg ada di vrbl no hp
//        
        cekNomorHp();
        daftarPulsa();
//      
        System.out.println();
        System.out.print("Masukkan Pulsa yang Anda inginkan : ");
        this.pulsaInput  = scanf.next();
//        
        cekPulsa();
    }

    void cekNomorHp(){
        int panjang = noHp.length();
        if (panjang != 12){
            System.out.print("Nomor Hp Yang Dimasukkan Salah\n");
            System.out.println();
            login();
        }
        
    }
    
    void liatPulsa(){
        System.out.println("\n\t| total pulsa = " + allPulsa);

        System.out.println();
        System.exit(0);
    }

    void cekPulsa(){
        int a=0;

        for(int i = 0;  i < pulsa.length ; i++){
            if(!pulsaInput.contains(pulsa[i])){

            }else{
                a += 1;
            }    

        }

        if(a >= 1){
            berhasil();
        }else{
            System.out.println("\t| Pulsa dimaksud tidak ada kakak :|");
            System.out.println();
            login();
        }
    }

    void berhasil(){
        allPulsa += Integer.parseInt(pulsaInput);
        System.out.println("allPulsa = " + allPulsa);
        
        System.out.print("\nSelamat, transaksi anda telah berhasil :)");
        liatPulsa();
    }


    void daftarPulsa(){
        int c = 1;
        System.out.print("\nDAFTAR PULSA :\n");
        for(int i = 0; i<pulsa.length; i++){
            System.out.print("\t" + c + " | " + pulsa[i]);//biar awalnya gajadi 0 + 1 
            if(c%2 == 0 ){
                System.out.println();
            }
            c+=1;
        }
    }

    public static void main(String[] args) {
        m2_Correctness2 go = new m2_Correctness2();
        go.login();
    }
    
}
