#include <iostream>
using namespace std;

//Fungsi sederhana dengan return
int kuadrat (int x){
	int y;
	y = x * x;	
	return y;
}

//fungsi void tanpa kembalian\


void awal(){
	
	cout<<"1. cari"<<endl;
		cout<<"2. lihat"<<endl;
			cout<<"3. keluar"<<endl;
	
	
}

void seleksi(){
	
	
	int input;
		cout <<"tentukan pilihan anda ";
			cin>>input;
			

	switch(input){
	 	case 1:
	 		cout<<"sedang mencari...";
	 	break;
	 	
		case 2:
	 		cout<<"melihat...";
	 	break;
	 	
		case 3:
	 		cout<<"keluar...";
	 	break;
		case 4:
	 		cout<<"silahkan masukan angka yang valid";
	 	break;
	
	
	}
	
	
}



int main(){
	
	
	awal();
	seleksi();
	
	
	
	
	
	
	return 0;
}