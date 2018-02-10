#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int number, hourwork;
	float cashhour, salary;

	cin>> number;
	cin>> hourwork;
	cin>> cashhour;

		salary = hourwork * cashhour;

			cout<< "NUMBER = "<<number<<endl;
			cout<<setiosflags(ios::fixed)<<setprecision(2) <<"SALARY = U$ "<<salary<<endl;


	return 0;
}