#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILE_LOGIN "akun_masuk.txt"
void login();
void transaksi();

int main(){
int mode;
 do{
  printf("pilih: \n1. Login \n2. Transaksi \nMode : ");
  mode=getche();
  if (mode=='1'){
  login();
  }
  else if(mode=='2'){
  transaksi();
  }
 } 
 while (mode=='1' || mode=='2');
 return 0;
}
void input_akun(int *saldo, char nama[10], char no[10] ){
   
  printf("\nNama : "); scanf("%s", nama);
  printf("No akun : "); scanf("%s", no);
  printf("saldo : "); scanf("%d", saldo);
}
void simpan_input_masuk(char nama_akun[10], char no_akun[10], int saldo){
 FILE * fp;
 fp= fopen(FILE_LOGIN,"a");
 fprintf(fp,"%s %s %d \n",nama_akun,no_akun,saldo);
 fclose(fp);
}
int baca_jam_masuk(char nama_akun[10], char no_akun[10],int *saldo){
 FILE * fp;
 char no_akun_masuk[10];
 fp= fopen(FILE_LOGIN,"r");

 while(fscanf(fp,"%s %s %d",no_akun_masuk,nama_akun,saldo)==3){
  printf("%s %d %d\n",no_akun_masuk,nama_akun,saldo);
//  printf("%d",strcmp(no_pol,no_pol_masuk));
  if(strcmp(no_akun,no_akun_masuk)==0) {
   fclose(fp);
   return 1;
  }
 }
 fclose(fp);
 return 0;
}
void login(){
 char nama[10];
 char no[10];
 int saldo_masuk;

 input_akun(&saldo_masuk, nama, no);
 printf("\n\n**Selamat akunmu berhasil**\n");
 puts(nama); 
 puts(no);
 printf("Rp. %d\n\n", saldo_masuk);
 simpan_input_masuk(nama, no, saldo_masuk);
}

int hitung_transaksi(int saldo_masuk){
 
 int pilih;
 int debit;
 int kredit;
 int total_debit;
 int total_kredit;
 
 printf("\n1. Debit \n2. Kredit \npilih :");
 pilih=getche();
 if(pilih=='1'){
  printf("\nNilai Debit : "); scanf("%d", &debit);
  total_debit = saldo_masuk - debit;
  printf("Total Saldo : Rp. %d", total_debit);
 }
 else if(pilih=='2'){
  printf("\nNilai Kredit : "); scanf("%d", &debit);
  total_kredit = saldo_masuk + kredit;
  printf("Total Saldo : Rp. %d", total_kredit); 
 }
 
}

void transaksi(){
 
 char nama[10];
 char no[10];
 int saldo_masuk, saldo_keluar;
 int biaya;
 
 hitung_transaksi(saldo_keluar);
 }
