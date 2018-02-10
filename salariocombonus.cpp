#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main ()
{
	char vendedor[15];
	double salario, venda, comissao;

	cin>> vendedor;
	cin>> salario;
	cin>> venda;

			comissao = (venda * 0.15)+salario;

						
			cout<<setiosflags(ios::fixed)<<setprecision(2) <<"TOTAL = R$ "<< comissao <<endl;


	return 0;
}