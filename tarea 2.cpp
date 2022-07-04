#include <iostream>
#include <stdlib.h>
#include <string>
#define USUARIO "carlos"
#define CONTRASENA "1807"
#define VOLVER "2"

using namespace std;
int main(){

string usuario, contrasena, si;
cout<<"ingrese Usuario:";getline(cin, usuario);

cout<<"ingrese Contrasena:";getline(cin, contrasena);
   
if (usuario == USUARIO && contrasena == CONTRASENA){
cout <<"\n\tBienvenido Carlos Cantillano";

cout <<"\n\tUsted tiene un total de 5000 en su cuenta de ahorros\n";
cout <<"\n\tPorfavor digite una opcion\n";
int opcion;
float total=5000;
int transferir;
int cuenta;
int volver;
float nuevototal;
float resta=0;
{
    {
		
        cout << "\n\t1- Consultar saldo \n";
		cout << "\n\t2- Transferir \n";			
		cout << "\n\t3- Salir \n";
        cin >> opcion;
        switch (opcion){
        case 1:
        	cout<< "\n\tsu saldo actual es de "<<total;  
        	break;
			case 2:
				cout<<"\n\tA que cuenta desea trasferir\n ";cin>>cuenta; 
				cout<<"\n\tCuanto dinero desea trasferir\n";cin>>transferir;
				
				if(transferir>total){
					cout<<"\n\tsu saldo es insuficiente para hacer esta trasaccion, usted cuenta con" <<total<<"\n";
				}
    else {
				nuevototal=total<resta;
				cout<<"\n\tLa transaccion fue existosa ahora usted cuenta con" <<total<<"\n";
				}
				
				
        	{
        		
			case 3:	
				 cout<<"\n\t¿Seguro desea cerrar sesion?";
        	     cout<<"\n\t1- SI";
        	     cout<<"\n\t2- NO";
        	     if (opcion=1){
        	    	
        	    }
        	    else (opcion=2);
        	    {
        	          volver;	
        	    }
        	    
        	    }
        	
        	
        }
	}

}
}




else{
cout <<"\nEl usuario y/o contrasena quese ingreso es incorrecto" <<endl;
}   
   return 0;

}


