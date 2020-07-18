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
