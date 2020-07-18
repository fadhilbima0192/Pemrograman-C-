#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
struct pelanggan
{
	char nama[60];
	string notelp;
	long int norek;
	double saldo;
};
int main()
{
	int n=0;
	pelanggan cus[60];
	int i,x,pil,pos;
	long int no;
	double setor,tarik;
	bool cek=false;
	menu:
		system("cls");
		cout <<"		Bank Toyib			"<<endl;
		cout <<"	      Pilih Transaksi		"<<endl;
		cout <<"1. Daftar "<<endl;
		cout <<"2. Menabung"<<endl;
		cout <<"3. Tarik"<<endl;
		cout<<"4. Cetak Daftar Nasabah"<<endl;
        cout<<"5. Cari Nasabah"<<endl;
        cout<<"6. Keluar"<<endl;
		cout <<"Silahkan Pilih Transaksi : "<<endl;
		cin >> pil;
		if(pil==1)
		{
			daftar:
				cout <<"-----------------------------------"<<endl;
				cout <<" Masukan Nomor Rekening (9 Digit) : ";
				cin >> no;
				{
					if(no==cus[i].norek)
					cek=true;
					else
					cek=false;
				}
				if(cek)
				{
					cout <<"Nomor Rekening sudah ada bang, Ulangi"<<endl;
					goto daftar;
				}
				else
				{
					cout <<"-----------------------------------"<<endl;
					cout <<"Masukan Nama : ";
					cin >> cus[n].nama;
					cout <<"Masukan No Telepon : ";
					cin >> cus[n].notelp;
					cout <<"Masukan Saldo Awal : Rp.";
					cin >> cus[n].saldo;
				}
				n=n+1;
				cus[i].norek=no;
				cout <<"-----------------------------------"<<endl;
				cout <<"Ketik Sembarang Angka untuk melanjutkan	: ";
				cin >> x;
				goto menu;
		}
