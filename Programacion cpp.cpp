#include<iostream>

using namespace std;

int main(){
    int n1,n2,  suma=0, resta=0, multiplicacion=0, division=0;
    cout<<"Nombre: Carlos Cantillano\n";
	cout<<"Inserte digito:"; cin>>n1;
	cout<<"inserte otro digito:";  cin>>n2;
	
	suma=n1+n2;
	resta=n1-n2;
    multiplicacion=n1*n2;
	division=n1/n2;

	cout<<"\nLa suma es:"<<suma<<endl;
	cout<<"\nla resta es:"<<resta<<endl;
	cout<<"\nla multiplicacion es:"<<multiplicacion<<endl;
	cout<<"\nla divisiones:"<<division<<endl; 

    return 0;
}
