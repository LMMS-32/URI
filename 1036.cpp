#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
	int main(){

		double A, B, C;

			cin>> A >> B >> C;
				// Bhaskara = -b +- sqrt(delta)/2*a
			// delta = (b^2 - 4*a*c)
			
				double delta = (pow (B, 2) - (4*A*C));
				double xlinha = (-B + sqrt (delta))/(2*A);
				double x2linha = (-B - sqrt (delta))/(2*A);

				 //nao aceitar se: divisão por 0 ou raiz de numero negativo.

			if ( A == 0.00 || delta < 0) {
				cout <<"Impossivel calcular"<<endl;
			}		
				else {
					cout <<fixed<<setprecision(5)<<"R1 = "<< xlinha <<endl;
					cout <<fixed<<setprecision(5)<<"R2 = "<< x2linha <<endl;	
				}

	return 0;
	}