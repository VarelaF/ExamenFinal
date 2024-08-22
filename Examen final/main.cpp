#include <iostream>
#include <string.h>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	using namespace std;
	//constantes de los votos
	string ID_Viajero[50]={""};
	string NombreViajero[50]={""};
	string DireccionViajero[50]={""};
	
	
	string IngresoViajeros[50]={""};
	string IngresoViajeroID[50]={""};
	string FechaIngresoViajero[50]={""};
	string LugarIngreso[50]={""};
	
	const int LongitudArray_Vijeros=sizeof ID_Viajero / sizeof ID_Viajero[0];
	const string salida="1";
	const string entrada="2";

		string muestraID_Viejero(string ingresado){
			int _longitudCodViaj=(sizeof ID_Viajero / sizeof ID_Viajero[0]);
			int i=0;
			string repetido="";
			while(i<_longitudCodViaj){				
				
				if(ingresado==ID_Viajero[i]){
					string repetido="";
					cout<<"Viajero ya existe, ingrese otro viajero";
					break;
				}
				if(ingresado!=ID_Viajero[i] && ID_Viajero==0){					
					repetido="No";
					cout<<endl<<"Datos ingresado con éxito!!"<<endl;
					break;					
				}				
			i++;
			}
		
		return repetido;			
	}
int contador=0;
//___________________________________________________________________________________
	void IngresarViajero(){		//	++++++++++++++++++	REGISTRA UN NUEVO VIAJERO	++++++++++++++++++
		setlocale(LC_ALL, "");
		system("cls");
		int ContadorViajero=0;
		string IDViajeroIngresado="";
		char eleccion;
		
		do{
			system("cls");
			printf("\n\n ++++++++++++++++++++++++++++++++++++++++++++++++++");
			printf("\n\tINGRESO DE VIAJEROS NUEVOS");
			printf(" \n++++++++++++++++++++++++++++++++++++++++++++++++++\n");
					
			printf("\n\nID del viajero: ");
			fflush(stdin);
			getline(cin,IDViajeroIngresado);//lee una linea completa y lo guarda en el vector de string			
		    fflush(stdin);	
			
			ID_Viajero[contador]=IDViajeroIngresado;
			/*	if(muestraID_Viejero(IDViajeroIngresado)=="No"){	// valida la repeticion a la hora de ingresar un viajero
		    	cod_Partido_Pol[ContadorViajero]=IDViajeroIngresado;
		    	ContadorViajero++;
			}	*/
						
			printf("\n\nNombre del viajero: ");
			fflush(stdin);
			getline(cin,NombreViajero[contador]);//lee una linea completa y lo guarda en el vector de string			
		    fflush(stdin);
		    		    
		    printf("\n\nDirección del viajero: ");
			fflush(stdin);
			getline(cin,DireccionViajero[contador]);//lee una linea completa y lo guarda en el vector de string			
		    fflush(stdin);
		    //--------------------
		    
	
			contador++;	
			cout<<"\n ¿desea ingresar más viajeros? (s/n): ";	
			cin>>eleccion;
			fflush(stdin);
			if (eleccion=='n'||eleccion=='N'){	
				break;
			}	
		}while(eleccion!='n');	
	}
	
	//___________________________________________________________________________________
	void RegistrarSalida_Entrada(){	//   +++++++++++++++++   REGISTRA LA SALIDA Y ENTRADA DE UN VIAJERO		++++++++++++++
		setlocale(LC_ALL, "");
		system("cls");
		int ContadorViajero=0;
		string IDViajeroIngresado="";
		char eleccion;
		int SeleccionEnSal=0;
		
		do{
			system("cls");
			printf("\n\n ++++++++++++++++++++++++++++++++++++++++++++++++++");
			printf("\n\tREGISTRAR SALIDA/ENTRADA DE VIAJEROS");
			printf(" \n++++++++++++++++++++++++++++++++++++++++++++++++++\n");
					
			printf("\n\nID del viajero: ");
			fflush(stdin);
			getline(cin,IDViajeroIngresado);//lee una linea completa y lo guarda en el vector de string			
		    fflush(stdin);	
			
			IngresoViajeroID[contador]=IDViajeroIngresado;
			/*	if(muestraID_Viejero(IDViajeroIngresado)=="No"){	// valida la repeticion a la hora de ingresar un viajero
		    	cod_Partido_Pol[ContadorViajero]=IDViajeroIngresado;
		    	ContadorViajero++;
			}	*/
						
			printf("\n\nFecha de salida/entrada: ");
			fflush(stdin);
			getline(cin,FechaIngresoViajero[contador]);//lee una linea completa y lo guarda en el vector de string			
		    fflush(stdin);
		    
		    printf("\n\nDigite si es salida (1) o entrada (2) > ");
			cin>>IngresoViajeros[contador];//lee si es salida o entrada			


			printf("\n\nLugar de ingreso: ");
			fflush(stdin);
			getline(cin,LugarIngreso[contador]);//lee una linea completa y lo guarda en el vector de string			
		    fflush(stdin);
		    //--------------------		    	
			contador++;	
			cout<<"\n ¿desea registrar más ingresos? (s/n): ";	
			cin>>eleccion;
			fflush(stdin);
			if (eleccion=='n'||eleccion=='N'){	
				break;
			}	
		}while(eleccion!='n');
	}
	
	//___________________________________________________________________________________
	void BorrarViajero(){
		
	}
	
	//___________________________________________________________________________________
	void ConsultarViajero(){
		setlocale(LC_ALL, "");
		system("cls");
			printf("\n\n =================================================");
			printf("\n\t CONSULTA DE VIAJEROS Y SUS INGRESOS");
			printf(" \n===================================================\n");
		string Id_Viajero_Ingreso="";
		
		
		cout<<"\n ID Viajero a buscar: ";
		cin>>Id_Viajero_Ingreso;
		
		cout<<endl;
		cout<<"Ingreso/salida || fecha  || Lugar"<<endl<<endl;
		 for (int i=0; i<LongitudArray_Vijeros;i++){
			string TipoIngreso="";
			if(IngresoViajeroID[i]==Id_Viajero_Ingreso){ //muestra solamente el viajero que se desea buscar
			
				if(IngresoViajeros[i]=="1")
				{
					TipoIngreso="Salida";
					
				}
				if(IngresoViajeros[i]=="2")
				{
					TipoIngreso="Entrada";
					
				}
				cout<<"  "<<TipoIngreso;
				cout<<"         "<<FechaIngresoViajero[i];
				cout<<"    "<<LugarIngreso[i];
				cout<<endl;
			}
				
					
		}
			
	}
	
	//___________________________________________________________________________________
	void Reportes(){
		
	}

	void Menu(){
		setlocale(LC_ALL, "");// permite caracteres especiales
		int op;
		do{			
			system("cls");
			printf("\n==========================================");
			printf("\nSISTEMA DE CONTROL DE MIGRACION\n");
			printf("==========================================\n\n\n\n");			
			printf("-Opcion 1: Ingresar Viajero\n");
			printf("-Opcion 2: Registrar salida/entrada\n");
			printf("-Opcion 3: Borrar viajero\n");
			printf("-Opcion 4: Consultar viajero\n");
			printf("-Opcion 5: Reportes\n");
			printf("-Opcion 6: Salir\n");
			printf("\nDigite una opción: ");
			scanf("%i",&op);
			
			switch (op)
			{
				case 1:
					IngresarViajero();
				break;
				case 2:
				RegistrarSalida_Entrada();
				
				break;
				case 3:	
					
					getch();				
				break;
				case 4:	
					ConsultarViajero();
				getch();				
				break;
				case 5:	
					
				getch();				
				break;
				case 6:					
				break;
			}
		
		}while(op!=6);						
	}


int main(int argc, char** argv) {
	
	Menu();
	/// sistema menu principal
	
	
	return 0;
}
