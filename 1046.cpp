#include <iostream>
//#include <iomanip>
//#include <math.h>
using namespace std;
	int main(){

		int inicial, final;

			cin>> inicial >> final;
				
				 //verificar duracao de jogo em horas

			if ( inicial > final){

				cout <<"O JOGO DUROU "<<((24-inicial) + final)<<" HORA(S)"<<endl;
			}		
				else if ( inicial == final ) {

					cout <<"O JOGO DUROU "<<24-inicial+final<<" HORA(S)"<<endl;

				}
					if ( inicial < final ) {

					cout <<"O JOGO DUROU "<<final-inicial<<" HORA(S)"<<endl;
				}

	return 0;
	}