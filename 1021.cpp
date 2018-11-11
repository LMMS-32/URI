#include <iostream>
//#include <iomanip>
//#include <math.h>
using namespace std;
	int main(){

		int cem, cinq, vintao, dez, cinco, dois, umreal, cinquencentarro, vintcincentarro, decentarro, cincocentarro, umcentarro, aux;
		double N;
		//1, 0.50, 0.25, 0.10, 0.05 e 0.01

		cin>> N;

		aux = N *100;
		cem = aux/10000;
		aux = cem%10000;

		cinq = aux/5000;
		aux = cinq%5000;
		
		vintao = N/2000;
		aux = N%2000;
		dez = N/1000;
		aux = N%1000;
		cinco = N/500;
		aux = N%500;
		dois = N/200;
		aux = N%200;
		umreal = N/100;
		aux = N%100;
		cinquencentarro = N/50;
		aux = N%50;
		vintcincentarro = N/ 25;
		aux = N%25;
		decentarro = N/ 10;
		aux = N%10;
		cincocentarro = N/ 5;
		aux = N% 5;



		cout << N <<endl;
		cout << cem << " nota(s) de R$ 100,00"<<endl;
		cout << cinq << " nota(s) de R$ 50,00"<<endl;
		cout << vintao << " nota(s) de R$ 20,00"<<endl;
		cout << dez << " nota(s) de R$ 10,00"<<endl;
		cout << cinco << " nota(s) de R$ 5,00"<<endl;
		cout << dois << " nota(s) de R$ 2,00"<<endl;
		cout << "MOEDAS:" <<endl;
		cout << umreal << " moeda(s) de R$ 1.00"<<endl;
		cout << cinquencentarro << " moeda(s) de R$ 0.50"<<endl;
		cout << vintcincentarro << " moeda(s) de R$ 0.25"<<endl;
		cout << decentarro << " moeda(s) de R$ 0.10"<<endl;
		cout << cincocentarro << " moeda(s) de R$ 0.05"<<endl;
		cout << umcentarro << " moeda(s) de R$ 0.01"<<endl;
		

	return 0;
	}
