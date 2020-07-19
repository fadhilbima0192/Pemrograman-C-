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
				for(i=0; i<n; i++)
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
		else if(pil==2)
		{
            cout<<endl;
            cout<<"-----------------------------------"<<endl;
            cout<<" Masukan Nomor Rekening (9 Digit) : ";
			cin>>no;
        	for(i=0; i<n; i++)
            {
                if(no==(cus[i].norek))
                {
                    pos=i;
                	cek=true;
                    break;
                }
                else
                cek=false;
            }
            if(cek)
            {
                cout<<"-----------------------------------"<<endl;
                cout<<" Masukan Nominal Setoran : Rp."; cin>>setor;
                cus[pos].saldo=cus[pos].saldo+setor;
                cout<<" Setoran Behasil"<<endl;
                cout<<" Jumlah Saldo Anda       : Rp."<<cus[pos].saldo<<endl;
                cout<<endl;
            }
            else
            cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
            cout<<" Ketik Sembarang Angka untuk melanjutkan	: "; cin>>x;
            goto menu;
        }
        else if(pil==3)
        {
        	cout<<endl;
            cout<<"-----------------------------------"<<endl;
            cout<<" Masukan Nomor Rekening (9 Digit) : ";
            cin>>no;
            for(i=0; i<n; i++)
            {
            	if(no==(cus[i].norek))
            	{
            		pos=i;
            		cek=true;
                    break;
				}
				else;
				cek=false;
			}
			if(cek)
			{
				cout<<"-----------------------------------"<<endl;
				cout<<" Masukan Jumlah Penarikan : Rp.";
				cin>>tarik;
				if(tarik<(cus[pos].saldo))
				{
					cus[pos].saldo=cus[pos].saldo-tarik;
					cout<<" Penarikan Berhasil"<<endl;
                    cout<<" Sisa Saldo Anda          : Rp."<<cus[pos].saldo<<endl;
                    cout<<endl;
				}
				else
        		cout<<" Maaf Saldo Anda Tidak Mencukupi"<<endl;
			}
			else
                cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
                cout<<" Ketik Sembarang Angka untuk melanjutkan	: ";
                cin>>x;
                goto menu;
		}
		else if(pil==4)
        {
            cout<<endl;
            cout<<" ---------------------------------------------------------------------- "<<endl;
            cout<<"|                            DAFTAR NASABAH BANK                       |"<<endl;
            cout<<"|______________________________________________________________________|"<<endl;
            cout<<"| No |   No Rekening   |    Nama    |  No Telpon  |    Total Saldo     |"<<endl;
            cout<<"|____|_________________|____________|_____________|____________________|"<<endl;
            for(i=0; i<n; i++)
            {
                cout<<setw(4)<<i+1;
                cout<<setw(16)<<cus[i].norek;
                cout<<setw(13)<<cus[i].nama;
                cout<<setw(17)<<cus[i].notelp;
                cout<<setw(18)<<(cus[i].saldo)<<endl;
        	}
        	cout<<"|____|_________________|____________|_____________|____________________|"<<endl;
        	cout<<" Ketik Sembarang Angka untuk melanjutkan	:  ";
        	cin>>x;
        	goto menu;
    	}
    	else if(pil==5)
    	{
    		cout<<"-----------------------------------"<<endl;
    		cout<<" Cek Nasabah, Masukan nomor rekening yang di cari (9 Digit) : ";
    		cin>>no;
    		cout<<endl;
			for(i=0; i<n; i++)
			{
                if(no==(cus[i].norek))
                {
                    pos=i;
                    cek=true;
                }
        		else
        		cek=false;
        	}
        	if(cek)
        	{
        		cout<<" Nomer Rekening            : "<<cus[pos].norek<<endl;
        		cout<<" Nama Nasabah              : "<<cus[pos].nama<<endl;
        		cout<<" No Telpon                 : "<<cus[pos].notelp<<endl;
        		cout<<" Saldo                     : Rp."<<cus[pos].saldo<<endl;
			}
			else
            cout<<" Nomer Rekening Tidak Ditemukan"<<endl;
            cout<<" Ketik Sembarang Angka untuk melanjutkan	:  ";
            cin>>x;
            goto menu;
		}
		else
		{
			cout<<"Terima Kasih sudah menggunakan jasa kami";
		}
	return 0;
}
