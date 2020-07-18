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
