#include <iostream>
#include <iomanip>
//#include <math.h>
using namespace std;
	int main(){

		double miserinha;
		//calcular porcentagem em cima do salario
		/* colocar na saída:
			Novo salario: salario+porcentagem
			Reajuste ganho: valor do reajuste
			Em percentual: x%
			*/
				cin>>miserinha;
			if (miserinha>=0 && miserinha<=400.00){
				cout<<fixed<<setprecision(2)<<"Novo salario: "<<miserinha+(miserinha*15/100)<<endl;
				cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(miserinha*15/100)<<endl;
				cout<<"Em percentual: 15 %"<<endl;
			}
			if (miserinha>=400.01 && miserinha<=800.00){
				cout<<fixed<<setprecision(2)<<"Novo salario: "<<miserinha+(miserinha*12/100)<<endl;
				cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(miserinha*12/100)<<endl;
				cout<<"Em percentual: 12 %"<<endl;
			}
			if (miserinha>=800.01 && miserinha<=1200.00){
				cout<<fixed<<setprecision(2)<<"Novo salario: "<<miserinha+(miserinha*10/100)<<endl;
				cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(miserinha*10/100)<<endl;
				cout<<"Em percentual: 10 %"<<endl;
			}
			if (miserinha>=1200.01 && miserinha<=2000.00){
				cout<<fixed<<setprecision(2)<<"Novo salario: "<<miserinha+(miserinha*7/100)<<endl;
				cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(miserinha*7/100)<<endl;
				cout<<"Em percentual: 7 %"<<endl;
			}
			if (miserinha>=2000.01){
				cout<<fixed<<setprecision(2)<<"Novo salario: "<<miserinha+(miserinha*4/100)<<endl;
				cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(miserinha*4/100)<<endl;
				cout<<"Em percentual: 4 %"<<endl;
			}
				

				/*0 - 400.00 - 15
		400.01 - 800.00 - 12
		800.01 - 1200.00 - 10
		1200.01 - 2000.00 - 7
		Acima de 2000.00 - 4*/

	return 0;
	}