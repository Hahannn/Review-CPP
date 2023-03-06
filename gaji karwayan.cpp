//program gaji karyawan

#include <iostream>
#include <string>
using namespace std;

main(){
	string nk;
	int nik, gp, t,total, pajak;
	
	cout<<"Masukkan nama karyawan : ";
	getline(cin, nk);
	cout<<"Masukkan Nik :";
	cin>>nik;
	cout<<"Masukkan Gaji: ";
	cin>>gp;
	cout<<"Masukkan Tunjangan: ";
	cin>>t;
	
	if(total >= 20000000 && total <= 25000000){
		pajak = 0.03;
	}
	else if(total >= 10000.000 && total <= 19999999){
		pajak = 0.028;
	} 
	else if(total >= 9000000 && total <= 9999999){
		pajak = 0.025;
	}
	else if(total >= 8000000 && total <= 8999999){
		pajak = 0.023;
	}
	else if(total >= 7000000 && total <= 7999999){
		pajak = 0.02;
	}
	else if(total >= 3000000 && total <= 6999999){
		pajak = 0.017;
	} else {
		pajak = 0.01 ;
	}
	
	total = gp - (gp * pajak);
	cout<<"-------------------Rekap Gaji karyawan--------------------"<< endl << endl;
	cout<<"Nama Anda: "<< nk << endl;
	cout<<"NIK Anda: "<< nik << endl;
	cout<<"Total Gaji Anda: "<< total << endl;
	cout<<"Total gaji anda setelah terkena pajak: "<< total;
	


}

