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
