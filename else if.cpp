#include <iostream>
#include <string>
using namespace std;

main(){
	cout<<"-------------------FAHRI ON THE SHOP---------------------"<<endl;
	string nb;
	int jb, sb, stb, hs, pajak, total_belanja, jumlah_pembayaran, uang_kembali;
	
	cout<<"Masukkan Nama Barang: ";
	getline(cin, nb);
	cout<<"Masukkan Jumblah Beli: ";
	cin>>jb;
	cout<<"Masukkan Stok Barang: ";
	cin>>stb;
	cout<<"Masukkan Harga Satuan: ";0
	cin>>hs;
	cout<<"Masukkan jumlah pembayaran: ";
	cin>>jumlah_pembayaran;
	
	
	// PROSES
	sb = stb - jb;
	total_belanja = hs * jb;
	pajak = total_belanja * 0.10;
	uang_kembali = - jumlah_pembayaran - total_belanja;
	
	
	cout<<"-----------------------------------------"<< endl << endl;
	cout<<"Jumlah Beli: "<< jb << endl;
	cout<<"Stok Barang: "<< stb << endl;
	cout<<"Sisa Barang: "<< sb << endl;
	cout<<"Harga Satuan: "<< hs << endl;
	cout<<"total belanja: "<< total_belanja<< endl;
	cout<<"pajak :"<< pajak <<endl;
	cout<<"jumlah_pembayaran "<< jumlah_pembayaran <<endl;
	cout<<"uang kembali "<< uang_kembali << endl;
	cout<<"-------------BONUS NYA ADALAH-----------------"<<endl;
	
	if(total_belanja >= 200000 && total_belanja <= 300000){
		cout<<"Mendapatkan Baju";
	}
	else if(total_belanja >= 100000 && total_belanja <= 199500){
		cout<<"Mendapatkan Payung";
	} 
	else if(total_belanja >= 90000 && total_belanja <= 99999){
		cout<<"Mendapatkan Piring";
	}
	else if(total_belanja >= 80000 && total_belanja <= 89999){
		cout<<"Mendapatkan Gelas";
	}
	else if(total_belanja >= 50000 && total_belanja <= 79999){
		cout<<"Mendapatkan Sabun";
	}
	else if(total_belanja >= 20000 && total_belanja <= 49999){
		cout<<"Mendapatkan Sikat Gigi";
	} else {
		cout<<"Tidak Mendapat apa-apa ";
	}
	
}




































































































































































































































































































































































































































