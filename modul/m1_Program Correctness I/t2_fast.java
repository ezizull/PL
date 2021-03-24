/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package m1_tugas2.java;


import java.util.*;

public class M1_tugas2Java {
    
    public static void main(String[] args){
        Input inn = new Input();
        Isian isi = new Isian();
        
        inn.input();
    }
}

class Input{
    void input(){
        Isian isi = new Isian();
        
        Scanner scanf = new Scanner(System.in);
        
        System.out.print("\nmasukan username: ");
        isi.SetInput(scanf.next());
        
        isi.logic();
    }
}

class Isian{
    private String username;

    void SetInput(String username){
        this.username = username;
    }

    void logic(){
        char cek = username.charAt(0);
        Input inn = new Input();
        
        if (username.length() < 15){
            System.out.print("\n\t| username kurang dari 15 digit  :(\n");
            inn.input();
        }
        else if (username.length() > 15)
        {
            System.out.print("\n\t| username lebih dari 15 digit  :(\n");
            inn.input();
        }

        // 202010370311203
        
        if ((cek >= 'a' && cek <= 'z' || cek >= 'A' && cek <= 'Z' )){
            System.out.print("\n\t| mohon input yang betul kakak :0\n");
            inn.input();
        }

        if (username.contains("10370311")){
            System.out.println("\n\t| selamat anda berhasil login :)\n");
            System.exit(0);
        }else{
            System.out.print("\n\t| anda bukan bagian dari kami enyahlah :v\n");
            inn.input();
        }
    }
}
