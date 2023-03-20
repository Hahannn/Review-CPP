#include <iostream>
#include <string>
using namespace std;

int main(){
	cout<<"----------------------------"<< endl;
	cout<<"Menghitung Biaya Rumah Sakit"<< endl;
	cout<<"----------------------------"<< endl <<endl;
	
	//input
	string np, ap, jk, pelayanan, bonus;
	int li, harga, uk, up, total, zakat, pajak, totaldua;
	
	cout<<"Masukkan Nama Pasien :";
	getline(cin, np);
	cout<<"Masukkan Alamat Pasien :";
	getline(cin, ap);
	cout<<"Masukkan Jenis Kelamin Pasien [L/P]:";
	getline(cin, jk);
	cout<<"Masukkan Lama Inap (hari) :";
	cin>>li;
	cout<<"Masukkan Harga per malam Rp. :";
	cin>>harga;
	cout<<"==========================================="<< endl << endl;
	
	//proses
	total = li * harga;
	//Output
	
	cout<<"Masukkan nama pasien: "<< np <<endl;
	
	cout<<"Masukkan Alamat Pasien :"<< ap <<endl;
	
	cout<<"Masukkan Jenis Kelamin Pasien :"<< jk <<endl;
	
	cout<<"Masukkan Lama Inap (hari) :"<< li <<endl;
	
	cout<<"Masukkan Harga per malam Rp. :"<< harga <<endl;
	
	cout<<"uang kembali adalah: "<< uk <<endl;
	
	//proses 
	if(total >= 5000000 && total <= 10000000){
		pajak = total * 0.4;
		zakat = total * 0.15;
		pelayanan = "Eksekutif";
		bonus = "Wisata Yogya";
	}
	else if(total >= 4000000 && total <= 4999999){
		pajak = total * 0.4;
		zakat = total * 0.125;
		pelayanan = "Vvip";
		bonus = "Wisata Semarang";
	}
	else if(total >= 3000000 && total <= 3999999){
		pajak = total * 0.35;
		zakat = total * 0.12;
		pelayanan = "Vip";
		bonus = "Wisata solo";
	}
	else if(total >= 2000000 && total <= 2999999){
		pajak = total * 0.3;
		zakat = total * 0.12;
		pelayanan = "Kelas 1";
		bonus = "Wisata Bandung";
	}
	else if(total >= 1000000 && total <= 1999999){
		pajak = total * 0.25;
		zakat = total * 0.1;
		pelayanan = "Kelas 1";
		bonus = "Wisata Jakarta";
	}
	else {
		pajak = total * 0.1;
		zakat = total * 0.005;
		pelayanan = "Kelas 3";
		bonus = "Di rumah saja";
	}
	
	cout<<"Pajak rumah sakit anda adalah: "<< pajak <<endl;	
	cout<<"Zakat anda adalah RP. : "<< zakat <<endl;
	cout<<"----------------------------------------------------"<< endl;
	cout<<pelayanan <<endl;
	cout<<bonus <<endl;
	//output harga ceritanya
	cout<<"------------------------------------------" <<endl << endl;
	totaldua = total + pajak + zakat;
	cout<<"Total Pembayaran Rumah Sakit"<< totaldua<< endl;
	cout<<"Masukkan Uang pembayaran";
	cin>>up;
	uk = up - totaldua;
	cout<<"uang kembalian adalah" << uk;
	
	
}
