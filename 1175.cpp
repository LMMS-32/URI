#include<iostream>
using namespace std;
int main(){

			int N[20];
			int i;
			int aux;

			for(i=0; i<=19; i++)
			cin>>N[i];

			for (i=0; i<=9 ; i++){
				// n[i] com n[19 - i]
				aux= N[i];
				N[i] = N[19-i];
				N[19-i] = aux;
			}

			for(i=0; i<=19; i++)
			{
			cout<<"N["<<i<<"] = "<<N[i]<<endl;
			}

	return 0;
}