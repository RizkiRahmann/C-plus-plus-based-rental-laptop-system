#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	string username, nim, pilih, jenis, tempat, nmr;
	int pilihan, waktu, nomor, harga, uang, kembalian;
	
	cout<<"SELAMAT DATANG"<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"				SEWA LAPTOP"<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<endl;
	cout<<"			Log in"<<endl;
	cout<<"			NIM 		: "; cin>>nim;
	cout<<"			Username	: "; 
	cin.ignore();
	getline (cin,username) ;
	system("cls");
	
	cout<<"HALO "<<username<<" ADA YANG BISA DIBANTU?"<<endl;
	cout<<endl;
	
	cout<<"==============================================================================="<<endl;
	menu:
	cout<<"MENU UTAMA : "<<endl;
	cout<<"1. Daftar jenis laptop dan harga sewa"<<endl;
	cout<<"2. Transaksi sewa laptop"<<endl;
	cout<<"3. Transaksi pengembalian laptop"<<endl;
	cout<<"4. Log out"<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"Masukan pilihan anda : "; cin>>pilihan;
	system("cls"); 
	
	switch(pilihan){
		
	//awal//
	case 1:
	menu1 :
	if(pilihan==1){
		cout<<"*****************************************"<<endl;
		cout<<"    DAFTAR JENIS DAN HARGA LAPTOP"<<endl;
		cout<<"*****************************************"<<endl;
		
		cout<<"==============================================================================="<<endl;
		cout<<"| NO |	| JENIS LAPTOP |	| HARGA SEWA |"<<endl;
		cout<<"| 1  |	|     ACER     |	| 400.000    |"<<endl;
		cout<<"| 2  |	|     ASUS     |	| 450.000    |"<<endl;
		cout<<"| 3  |	|     ROG      |	| 500.000    |"<<endl;
		cout<<"==============================================================================="<<endl;
		cout<<endl;
		cout<<"Cek Spek Laptop (Y/T) 	? "; cin>>pilih;
		if((pilih=="y") || (pilih=="Y")){
			cout<<"====================================="<<endl;
			cout<<"Mau cek nomor berapa "<<username<<" 	? "; cin>>nomor;
			if(nomor==1){
				cout<<"Spek ACER..........."<<endl;
				cout<<"====================================="<<endl;
			} else if(nomor==2){
				cout<<"Spek ASUS....."<<endl;
				cout<<"====================================="<<endl;
			} else if(nomor==3){
				cout<<"Spek ROG......"<<endl;
				cout<<"====================================="<<endl;
			} else{
				cin.ignore();
				cout<<"PILIHAN TIDAK ADA"<<endl;
				cin.get();
				system("cls");
				goto menu;
			}
		}
		cout<<endl;
		cout<<"------------------------------------------"<<endl;
		cout<<"Mau Lanjut Ke Transaksi Sewa (Y/T) 	? "; cin>>pilih;
		if((pilih=="y") || (pilih=="Y")){
			system("cls");
			goto menu2 ;
		}else {
			cin.ignore();
			system("cls");
			goto menu ;
		}
	}break;
	
	
	//lanjutan pilihan 1//
	case 2 :
	if (pilihan==2){
	menu2:
	cout<<"==============================================================================="<<endl;
	cout<<"                           TRANSAKSI SEWA LAPTOP"<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<endl;
	cout<<"Masukan lama waktu peminjaman (Per HARI) : "; cin>>waktu;
	cout<<endl;
	cout<<"NIM peminjam 				: "<<nim<<endl;
	cout<<"Tipe Laptop yang dipinjam 		: ";cin>>jenis;
		if((jenis=="ACER")||(jenis=="Acer")||(jenis=="acer")){
			cout<<"Harga Sewa Per Hari 			: Rp.400.000";
		} else if((jenis=="ASUS")||(jenis=="Asus")||(jenis=="asus")){
			cout<<"Harga Sewa Per Hari 			: Rp.450.000";
		} else if((jenis=="ROG")||(jenis=="Rog")||(jenis=="rog")){
			cout<<"Harga Sewa Per Hari			: Rp.500.000";
		} else{};
	cout<<endl;
		if((jenis=="ACER")||(jenis=="Acer")||(jenis=="acer")){
			harga=400000*waktu;
			cout<<"Harga Total 				: ""Rp."<<harga;
		} else if((jenis=="ASUS")||(jenis=="Asus")||(jenis=="asus")){
			harga=450000*waktu;
			cout<<"Harga Total 				: ""Rp."<<harga;
		} else if((jenis=="ROG")||(jenis=="Rog")||(jenis=="rog")){
			harga=500000*waktu;
			cout<<"Harga Total 				: ""Rp."<<harga;
		} else{
			cin.ignore();
			cout<<"**********************"<<endl;
			cout<<"JENIS LAPTOP TIDAK ADA"<<endl;
			cout<<"**********************"<<endl;
			cin.get();
			system("cls");
			goto menu;
		}
	cout<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"Uang yang dibayarkan Rp."; cin>>uang;
	kembalian = uang - harga;
	if(uang>=harga){
		cout<<"Uang Kembali Rp."<<kembalian<<endl;
		cout<<endl;
		cout<<"----------------------------------------------------------"<<endl;
		cout<<"Mau Lanjut Ke Transaksi Pengembalian (Y/T) ? "; cin>>pilih;
		if((pilih=="y") || (pilih=="Y")){
			system("cls");
			goto menu3;
		} else {};
			system("cls");
			goto menu ;
	} else(uang<=harga);{
		cin.ignore();
		cout<<"Uang Anda Kurang"<<endl;
		cin.get();
		system("cls");
		goto menu;
	}
	} break;
		
		
	//lanjutan pilihan 2//
	case 3 :
	if (pilihan==3){
	menu3:
	cout<<"==============================================================================="<<endl;
	cout<<"                            TRANSAKSI PENGEMBALIAN LAPTOP"<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<endl;
	cout<<"- Entry Data Pelanggan -"<<endl;
	cout<<endl;
	cout<<"*NOTE : HARUS SUDAH MELAKUKAN TRANSAKSI SEWA*"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Nama Pelanggan   : "<<username<<endl;
	cout<<"NIM              : "<<nim<<endl;
	cout<<"Alamat           : "; 
	cin.get();
	getline (cin,tempat) ;
	cout<<"No.Telepon       : "; cin>>nmr;
	cout<<"Total Bayar      : "<<harga<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Apakah Data Sudah Benar Dan Ingin Lanjut (Y/T) ? ";  cin>>pilih;
		if((pilih=="y") || (pilih=="Y")){
			system ("cls");
			cout<<"                      SURAT KETERANGAN PENGEMBALIAN LAPTOP"<<endl;
			cout<<"==============================================================================="<<endl;
			cout<<endl;
			cout<<"***SURAT HARUS DIJAGA DAN TIDAK BOLEH HILANG***"<<endl;
			cout<<endl;
			cout<<"Nama Pelanggan    : "<<username<<endl;
			cout<<"NIM               : "<<nim<<endl;
			cout<<"Alamat            : "<<tempat<<endl;
			cout<<"No.Telepon        : "<<nmr<<endl;
			cout<<"Total Bayar       : Rp."<<harga<<endl;
			cout<<"Uang yang DiBAYAR : Rp."<<uang<<endl;
			cout<<endl;
			cout<<"|------------------------------------------------------------------------------"<<endl;
			cout<<"| Dengan rincian sebagai berikut :              "<<endl;
			cout<<"| - 1 LAPTOP "<<jenis<<" -"<<endl;
			cout<<"|                                               "<<endl;
			cout<<"| Dengan ini pula dinyatakan pembayaran ^LUNAS^ "<<endl;
			cout<<"|------------------------------------------------------------------------------"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Keterangan : LUNAS"<<endl;
			cout<<"==============================================================================="<<endl;
			cout<<"                      TERIMA KASIH ATAS KEPERCAYAAN ANDA"<<endl;
			cout<<"===============================================================================";
		}else {
			cin.ignore();
			system("cls");
			goto menu ;
		}
	} break;
	
	
	//KELUAR//
	case 4 :
	if (pilihan==4){
		cin.ignore();
	} break;
	
	
	//Pilihan tidak ada atau salah input//
	default :
	cin.ignore();
	cout<<"Pilihan Tidak Ada Coba Yang Lain"<<endl;
	cin.get();
	system("cls");
	goto menu;
	}
}