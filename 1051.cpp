#include <iostream>
#include <iomanip>
//#include <math.h>
using namespace std;
	int main(){

		double renda;
		//1051 imposto de renda
		//https://www.urionlinejudge.com.br/judge/pt/problems/view/1051
		/*
			
			cin>>renda;
			if (renda >= 0.00 && renda <= 2000.00){
				cout<<"Isento"<<endl;
			}
			else if (renda >= 2000.01 && renda <= 3000.00){
				cout<<fixed<<setprecision(2)<<"R$ "<<((renda-2000.00)*0.08)<<endl;
			}
			else if (renda >= 3000.01 && renda <= 4500.00){
				cout<<fixed<<setprecision(2)<<"R$ "<<(((renda-3000.00)*0.18)+((renda-2000.00)*0.08))<<endl;
			}
			else {
				(renda >= 4500.00);
				cout<<fixed<<setprecision(2)<<"R$ "<<(((renda-4500.00)*0.28)+((renda-3000.00)*0.18)+((renda-2000.00)*0.08))<<endl;
			}*/
				cin>>renda;
			if (renda >= 0.00 && renda <= 2000.00){
				cout<<"Isento"<<endl;
			}
			else if (renda >= 2000.01 && renda <= 3000.00){
				cout<<fixed<<setprecision(2)<<"R$ "<<((renda-2000.00)*0.08)<<endl;
			}
			else if (renda >= 3000.01 && renda <= 4500.00){
				cout<<fixed<<setprecision(2)<<"R$ "<<(((renda-3000.00)*0.18)+(1000.00*0.08))<<endl;
			}
			else {
				(renda >= 4500.00);
				cout<<fixed<<setprecision(2)<<"R$ "<<(((renda-4500.00)*0.28)+(1500.00*0.18)+(1000.00*0.08))<<endl;
			}

	return 0;
	}