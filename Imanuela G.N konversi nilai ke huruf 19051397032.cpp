#include <iostream>
using namespace std;

int main(){
	float nilai;
	cout<<"masukkan nilai anda = ";
	cin>>nilai;
	
	if(nilai>12&&nilai<=22){
		cout<<"Selamat Grade anda A";
	}
	else if(nilai>22&&nilai<=32){
		cout<<"Grade anda AB";
	}
	else if(nilai>32&&nilai<=42){
		cout<<"Grade B";
	}
	else if(nilai>42&&nilai<=52){
		cout<<"Grade anda BC ";
	}
	else if(nilai>52&&nilai<=62){
		cout<<"Grade anda C ";
	}
	else if(nilai>62&nilai<=72){
		cout<<"Grade anda CD ";
	}
	else if(nilai>72&&nilai<=82){
		cout<<"Grade anda D ";
	}
	else if(nilai>82&&nilai<=92){
		cout<<"Grade anda E ";
	}
	else if(nilai>92&&nilai<=102){
		cout<<"Grade anda F ";
	}
	 else {
		cout<< "Tolong Masukkan Nilai Dengan Benar";
	}
	return 0;
}



