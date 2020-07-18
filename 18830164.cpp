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
