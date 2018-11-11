#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
	int main(){

		float litro, hora, velmedia; //velmedia= velocidade media
			
			cin>>velmedia;
			cin>>hora;

			litro= ((velmedia*hora)/12);
				
						cout<<fixed<<setprecision(3)<<litro<<endl;

	return 0;
	}
