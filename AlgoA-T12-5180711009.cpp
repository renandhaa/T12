#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

struct data{
char nim[20],nama[20],kelas[20];};
data batas[100];
int a,b,c,d;

void inputdata()
{    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"NIM\t: ";cin>>batas[a].nim;
   cout<<"Nama\t: ";cin>>batas[a].nama;
   cout<<"Kelas\t: ";cin>>batas[a].kelas;
   a++;}system("cls");}



void lihatdata()
{int i,j;
 cout<<"\nMenampilkan Data\n";
 cout<<"||\tNO\t||\tNIM\t||\tNama\t\t||\tKelas\t||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].nim<<"\t||";
  cout<<batas[i].nama<<"\t\t\t||";
  cout<<batas[i].kelas<<"\t\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";getch();system("cls");}

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
system("cls");
 cout<<"Data ke-"<<x<<" Terhapus ";
 getch();system("cls");
}

void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"NIM\t: ";cin>>batas[l].nim;
cout<<"Nama\t: ";cin>>batas[l].nama;
cout<<"Kelas\t: ";cin>>batas[l].kelas;
lihatdata();
}

int main()
{int pilih;
 char in;

 getch();system("cls");
  awal:
cout<<"\n1. Masukkan data"<<"\n2. Hapus Data"<<"\n3. Lihat Data"<<"\n4. Edit Data"<<"\n5. Keluar"<<"\n\nMasukkan Pilihan : ";
cin>>pilih;
if(pilih==1)
   {system("cls");inputdata();goto awal;}
if(pilih==2)
   {system("cls");hapusdata();goto awal;}
if(pilih==3)
   {system("cls");lihatdata();goto awal;}
if(pilih==4)
   {system("cls");editdata();goto awal;}
if(pilih==5)
   {system("cls");
cout<<"APAKAH ANDA YAKIN KELUAR DARI PROGRAM\n"<<"Ya Atau Tidak\n"<<endl;
cin>>in;
if(in=='y'||in=='Y')
{system("cls");
cout<<"PROGRAM SELESAI";}
if(in=='n'||in=='N')
{system("cls");goto awal;}}
else
{system("cls");cout<<"Pilihan 1-5";getch();system("cls");goto awal;
}}
