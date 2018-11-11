#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
	int main(){

		int cem, cinq, vintao, dez, cinco, dois, umreal, N;
		
		cin>> N;

		cem = N/100;
		cinq = N%100 /50;
		vintao = N%100 %50 /20;
		dez = N%100 %50 %20 /10;
		cinco = N%100 %50 %20 %10 /5;
		dois = N%100 %50 %20 %10 %5 /2;
		umreal = N%100 %50 %20 %10 %5 %2 /1;


		cout << N <<endl;
		cout << cem << " nota(s) de R$ 100,00"<<endl;
		cout << cinq << " nota(s) de R$ 50,00"<<endl;
		cout << vintao << " nota(s) de R$ 20,00"<<endl;
		cout << dez << " nota(s) de R$ 10,00"<<endl;
		cout << cinco << " nota(s) de R$ 5,00"<<endl;
		cout << dois << " nota(s) de R$ 2,00"<<endl;
		cout << umreal << " nota(s) de R$ 1,00"<<endl;
		

	return 0;
	}
