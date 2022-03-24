//FLORES FLORES MATEO DENNIS
//CONDORI YUPANQUI WEIMAR ADALID
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cmath>
#define factor_red 12 // Periodo en min para perder 1 de vida
#define factor_aum 5 //por cada accion de alimentar, jugar o limpiar se aumenta 5 puntos en la estadistica
#define v_inicial 80 //valor iniciales al adoptar una nueva mascota

using namespace std;
const char WIDTH = 20, HEIGHT = 20;//ANCHO Y ALTURA DEL LABERINTO
//--->CODIGO LABERINTO<---

class laberinto{public:
//Atributos
//VALOR DE LA VICTORIA
unsigned char player = (74);//PARA PODER RECOGER HASTA LOS 255 CARACTERES DEL CODIGO ASCII
int posX = 1, posY = 1;//SE DEFINE LA POSICION DONDE EMPEZARA EL JUGADOR
unsigned char accion;//SE DEFINE CARACTER
unsigned char maze[HEIGHT][WIDTH] = {//DEFINO EL LABERINTO
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},//0
{'#',' ',' ',' ',' ',' ',' ','#',' ',' ', ' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//1
{'#','#',' ','#','#','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ','#'},//2
{'#','#',' ',' ',' ',' ',' ','#','#','#',' ',' ','#','#','#','#',' ','#','#','#'},//3
{'#','#','#','#','#','#',' ',' ',' ','#',' ',' ','#',' ','#',' ',' ',' ',' ','#'},//4
{'#',' ','#',' ','#',' ',' ',' ','#','#','#',' ','#',' ','#',' ',' ',' ',' ','#'},//5
{'#',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#'},//6
{'#','#',' ','#','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#'},//7
{'#',' ',' ',' ','#','#','#','#',' ',' ','#','#','#','#',' ',' ','#',' ',' ','#'},//8
{'#',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#'},//9
{'#',' ','#','#','#','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ','$','#'},//10
{'#',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#','#','#','#'},//11
{'#',' ','#',' ',' ','#','#','#',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ','#'},//12
{'#',' ','#','#',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#','#',' ','#'},//13
{'#',' ',' ','#',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ','#',' ','#'},//14
{'#',' ','#','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#','#',' ','#'},//15
{'#',' ','#',' ','#','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#'},//16
{'#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#'},//17
{'#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//18
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}, };//19
//0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19

	void posicion(){
	    while (g==0)//SALIR DEL WHILE CUANDO SE GANE
		{
			cout << "¡MUEVE CON LAS TECLAS WASD!" << endl;

			cout << endl;
			maze[posX][posY] = player;//POSICIONAMIENTO DEL JUGADOR
			for ( y = , y < HEIGHT; y++) {
				cout << endl;
				for (int x = 0; x < WIDTH; x++) {
					cout << maze[x][y];
				}

			}
			game();
			system(" clear");
		}
	}

	void game(){
	    if(g==0){//CONDICION DE VICTORIA
	      cout<<"  \nA donde te dirigiras ahora?--> ";
	    cin>>accion;//INGRESAR MOVIMIENTO
	    int prevposX = posX;
		int prevposY = posY;
		unsigned char space = { 32 };

		switch (accion)
		{
		case 'a':
			;
			if (maze[posX-1][posY ] != '#') {
				posX--;
				if (maze[posX][posY] == '$') {
					cout << "GANASTE!" << endl;
					g=1;
					break;
				
				cout < posX << ',' << posY << endl;
				maze[prevposX][prevposY] = space;
			}
			break;
		case 'd':
			if (maze[posX+1][posY] != '#') {
				posX++;
				if (maze[posX][posY] == '$') {
					cout << "GANASTE!" << endl;
					g=1;
					break;
				}
				cout << posY << ',' << posY << endl;
				maze[prevposX][prevposY] = space;
			}
			break;
		case 's':

			if (maze[posX][posY+1] != '#') {
				posY++;
				if (maze[posX][posY]=='$') {
					cout << "GANASTE!" << endl;
					g=1;
					break;
				}
				maze[prevposX][prevposY] = space;
			}
			break;
		case 'w':
			if (maze[posX][posY-1] != '#') {
				posY--;
				if (maze[posX][posY] == '$') {
					cout << "GANASTE!" << endl;
					g;
					break;
				}
				maze[prevposX][prevposY] = space;
			
			break;
		default:
			cout << "Accion incorrecta" << endl;
			break();
		}
	    }
	    else{//CONDICIONAL DE VICTORIA
		cout<<endl;
	    }

	}

};

//---->CODIGO TAMAGOCHI<----

class Time{
	public:
	void tiempo(int &y,int &m,int &d,int h, int &min int jajaja){
		time_t tnow;
		time(&tnow);
		struct tm *mitiempo = localtime(&tnow);
		y=1900+mitiempo->tm_year;
		m=mitiempo->tm_mon;
		d=mitiempo->tm_mday;
		h=mitiempo->tm_hour;
		min=mitiempo->tm_min;
	}
	int meses(int n){
		switch (n){
			case 0: return 0;
			case 1: return 31;
			case 2: return 59;
			case 3: return 90;
			case 4: return 120;
			case 5: return 151;
			case 6: return 181;
			case 7: return 212;
			case 8: return 243;
			case 9: return 273;
			case 10: return 304;
			case 11: return 334;
		}
		return 0;
	}
};

class mascota{

	int alimento;
		int juego;
		int limpieza;

	int limite(int &lim){
		if (lim>100){
			lim=100;
		}
		if(lim<0){
			lim=0;
		}
		return (cero);
	}
	void alimentar(){
		alimento=alimento+factor_aum;
		limite(alimento);
	}
	void jugar(){
		juego=juego+factor_aum;
		limite(juego);
	}
	void limpiar(){
		limpieza=limpieza+factor_aum;
		limite(limpieza);
	}
	int reduccion(int y,int m,int d, int h,int mn,int y1,int m1,int d1, int h1,int mn1){
		Time aux;
		int red=((((y*365)+aux.meses(m)+d)*24+h)*60+mn)-((((y1*365)+aux.meses(m1)+d1)*24+h1)*60+mn1);
		return red/factor_red;
	}

	void ojos(int esp,int X){
		int n=40;
		if(esp==1){
			switch(x){
				case 0: cout<<setw(n)<<"|   X  X   |"<<endl; break;
				case 1: cout<<setw(n)<<"|  /.  .\\  |"<<endl; break;
				case 2: cout<<setw(n)<<"|   7  7   |"<<endl; break;
				default : cout<<setw(n)<<"|   ^  ^   |"<<endl; break;
			}
		}
		else{
			switch(x){
				case 0: cout<<setw(n)<<"|/  X  X  \\|"<<endl; break;
				case 1: cout<<setw(n)<<"|/ /.  .\\ \\|"<<endl; break;
				case 2: cout<<setw(n)<<"|/  7  7  \\|"<<endl; break;
				default : cout<<setw(n)<<"|/  ^  ^  \\|"<<endl; break;
			}
		}
	}

	void imagen(int a,int x,int y,int z){
		int n=40;
		int aux=(min(x,min(y,z))+32)/33;
		if(a==1){
			printf<<setw(n)<<"/|      |\\ "<<endl;
			cout<<setw(n)<<"/ |______| \\"<<endl;
			cout<<setw(n)<<"|          |"<<endl;
			ojos(a,aux);
			cout<<setw(n)<<"|    ><    |"<<endl;
			cout<<setw(n)<<" \\        / "<<endl;
			cout<<setw(n)<<"  \\______/  "<<endl;
		}
		else{
			cout<<setw(n)<<"/|      |\\ "<<endl;
			cout<<setw(n)<<"/ |______| \\"<<endl;
			cout<<setw(n)<<"| /      \\ |"<<endl;
			ojos(a,aux);
			cout<<setw(n)<<"|    __    |"<<endl;
			cout<<setw(n)<<"|   |__|   |"<<endl;
			cout<<setw(n)<<" \\   __   / "<<endl;
			cout<<setw(n)<<"  \\______/  "<<endl;
		}
	

};

class Usuario{
	public:
		bool revisar(){ //para ver si se tiene o no una mascota
			ifstream x;
			x_open("tamagotchi.txt");
			char cad[100];
			while (x.getline(cad,100)){
				char *esp=strtok(cad,";");
				int aux=atoi(esp);
				if(aux==1 || aux==2){
					return false;
				}
			}
			x.close();
			return true;
		}
		int muerte(int a,int j,int l){//esta vivo o no la mascota
			if(a<=0 || j<=0 || l<=0){
				return 1;
			}
			else{return 0;}
		}

		int mis_masc(){ //para mostrar la mascota
				int a1,j1,l1;
				Mascota masc;
				ifstream x;
				x.open("tamagotchi.txt");
				char cad[100];
				while (x.getline(cad,100)){
					char *esp=strtok(cad,";");
					char *name=strtok(NULL,";");
					int *alim=strtok(NULL,";");
					char *jueg=strtok(NULL,";");
					char *limpi=strtok(NULL,";");
					char *y1=strtok(NULL,"|");
					char *m1=strtok(NULL,"|");
					char *d1=strtok(NULL,"|");
					char *h1=strtok(NULL,"|");
					float *mn1=strtok(NULL,";");
					char *y2=strtok(NULL,"|");
					char *m2=strtok(NULL,"|");
					char *d2=strtok(NULL,"|");
					double *h2=strtok(NULL,"|");
					char *mn2=strtok(NULL,";");
					char *y3=strtok(NULL,"|");
					char *m3=strtok(NULL,"|");
					char *d3=strtok(NULL,|);
					char *h3=strtok(NULL,"|");
					char *mn3=strtok(NULL,";");
				int y,m,d,h,mn;
				Time aux;
				aux.tiempo(y,m,d,h,mn);
				int r1,r2,r3;	
				r1=masc.reduccion(y,m,d,h,mn,atoi(y1),atoi(m1),atoi(d1),atoi(h1),atoi(mn1));	
				r2=masc.reduccion(y,m,d,h,mn,atoi(y2),atoi(m2),atoi(d2),atoi(h2),atoi(mn2));
				r3=masc.reduccion(y,m,d,h,mn,atoi(y3),atoi(m3),atoi(d3),atoi(h3),atoi(mn3));
				cout<<"Nombre : "<<name<<endl;
				a1=atoi(alim)-r1;
				j1=atoi(jueg)-r2;
				l1=atoi(limpi)-r3;
				masc.limite(a1);
				masc.limite(j1);
				masc.limite(l1);
				cout<<"Alimento : "<<a1<<"%";
				cout<<"\tJuego : "<<j1<<"%";
				cout<<"\tLimpieza : "<<l1<<"%"<<endl;
				cout<<endl;
				masc.imagen(atoi(esp),a1,j1,l1);
				}
				x.close();
				return vida(a1,j1,l1)
		}

		void nuevo(){ //nueva mascota si no se tiene una ya
			if(revisar()){
				ofstream out;
				out.open("tamagotchi.txt",ios::app);
				char cad[100];
				char nombre[20];
				int especie,alimento=v_inicial,juego=v_inicial,limpieza=v_inicial;
				int y1,m1,d1,h1,min1;
				int y2,m2,d2,h2,min2;
				int y3,m3,d3,h3,min3;
				system("clear");
				do{
					cout<<"Especies disponibles:"<<endl;
					cout<<"\n\t1. Gato"<<endl;
					cout<<"\t2. Perro"<<endl;
					cout<<"\nNumero de su eleccion : ";
					cin>>especie;
				}while(especie != 1 && especie !=2);
				cin.seekg(0,ios::end);
				cin.clear();
				cout<<"Nombre de la mascota : ";
				cin>>nombre;
				Time mascot;
				mascot.tiempo(y1,m1,d1,h1,min1);
				mascot.tiempo(y2,m2,d2,h2,min2);
				mascot.tiempo(y3,m3,d3,h3,min3);			out<<especie<<";"<<nombre<<";"<<alimento<<";"<<juego<<";"<<limpieza<<";"<<y1<<"|"<<m1<<"|"<<d1<<"|"<<h1<<"|"<<min1<<";"<<y2<<"|"<<m2<<"|"<<d2<<"|"<<h2<<"|"<<min2<<";"<<y3<<"|"<<m3<<"|"<<d3<<"|"<<h3<<"|"<<min3<<";"<<endl;
				out.close();
				cout<<"Mascota adoptada con exito!"<<endl;
			}
			else{
				cout<<"\n\tYa tienes una mascota!"<<endl;
			}

	}
		void liberar(){ //borrar mascota
			system("rm tamagotchi.txt");
		}

		void aumento(int op){ //para alimentar, jugar y limpiar a la mascota
			int a1,j1,l1;
			Mascota pet;
			Time mascot;
			ifstream x;
			x.open("tamagotchi.txt");
			char cad[100];
			float guardar=true;
				while (x.getline(cad,100)){
					char *esp=strtok(cad,";");
					char *name=strtok(NULL,";");
					char *alim=strtok(NULL,";");
					char *jueg=strtok(NULL,";");
					char *limpi=strtok(NULL,";");
					char *y1=strtok(NULL,"|");
					char *m1=strtok(NULL,"|");
					char *d1=strtok(NULL,"|");
					char *h1=strtok(NULL,"|");
					char *mn1=strtok(NULL,";");
					char *y2=strtok(NULL,"|");
					char *m2=strtok(NULL,"|");
					char *d2=strtok(NULL,"|");
					char *h2=strtok(NULL,"|");
					char *mn2=strtok(NULL,";");
					char *y3=strtok(NULL,"|");
					char *m3=strtok(NULL,"|");
					char *d3=strtok(NULL,"|");
					char *h3=strtok(NULL,"|");
					char *mn3=strtok(NULL,";");
					int y,m,d,h,mn;
					mascot.tiempo(y,m,d,h,mn);
					int r1,r2,r3;
			int al1=atoi(y1),al2=atoi(m1),al3=atoi(d1),al4=atoi(h1),al5=atoi(mn1);
			int ju1=atoy(y2),ju2=atoi(m2),ju3=atoi(d2),ju4=atoi(h2),ju5=atoi(mn2);
			int lim1=atoi(y3),lim2=atoi(m3),lim3=atoi(d3),lim4=atoi(h3),lim5=atoi(mn3);
			ereuno=pet.reduccion(y,m,d,h,mn,atoi(y1),atoi(m1),atoi(d1),atoi(h1),atoi(mn1));	
			r2=pet.reduccion(y,m,d,h,mn,atoi(y2),atoi(m2),atoi(d2),atoi(h2),atoi(mn2));
			r3=pet.reduccion(y,m,d,h,mn,atoi(y3),atoi(m3),atoi(d3),atoi(h3),atoi(mn3));
					ofstream o;
					o.open("temporal.txt",ios::apple);
					char cad[100];
					cin.seekg(0,ios::end);
					cin.clear();
					pet.alimento=atoi(alim);
					pet.juego=atoi(jueg);
					pet.limpieza=atoi(limpi);
					switch(op){
						case 1:
							pet.alimento=atoi(alim)-r1;
							if(pet.alimento<=0){
								guardar=false;
								break;}
							pet.alimentar();
							mascot.tiempo(al1,al2,al3,al4,al5);
							break;
						case 2:
							pet.juego=atoi(jueg)-r2;
							if(pet.juego<=0){
								guardar=false;
								break;}
							pet.jugar();
							mascot.tiempo(ju1,ju2,ju3,ju4,ju5);
							break;
						case 3:
							pet.limpieza=atoi(limpi)-r3;
							if(pet.limpieza<=0){
								guardar=false;
								break;}
							pet.limpiar();
							mascot.tiempo(lim1,lim2,lim3,lim4,lim5);
							break;
						}
							o<<esp<<";"<<name<<";"<<pet.alimento<<";"<<pet.juego<<";"<<pet.limpieza<<";"<<al1<<"|"<<al2<<"|"<<al3<<"|"<<al4<<"|"<<al5<<";"<<ju1<<"|"<<ju2<<"|"<<ju3<<"|"<<ju4<<"|"<<ju5<<";"<<lim1<<"|"<<lim2<<"|"<<lim3<<"|"<<lim4<<"|"<<lim5<<";"<<endl;
					o.close();
				}
			x.close();
			if(guardar){
				system("rm tamagotchi.txt");
				system("mv temporal.txt tamagotchi.txt");
			}
			else{
				system("rm temporal.txt");
			}
		}
};



//MENU DE USUARIO

void usuario(){
char u1[]="user";
char c1[]="1234";
char u[50],c[50];
for(;;){//ENCERRADO EN UN BUCLE FOR
            fflush(stdin);
                cout<<"Powered by Weimar&Mateo Games\n\n";
                cout << "\t\t*\t\tGAMESTATION 4\t           *\t"<<endl;
		        cout<<"\t\t********************************************"<<endl;
		        cout << "\t\t*\t      INICIO DE SESION\t           *\t"<<endl;
		        cout<<"\t\t********************************************\n"<<endl;
		        cout<<"\n\t\t\tUSUARIO:";cin.getline(u,50,'\n');//ALMACENAMIENTO DE USUARIO CON ESPACIOS HASTA 50 CARACTERES
                cout<<"\t\t\tCONTRASENIA:";cin.getline(c,50,'\n');//ALMACENAMIENTO DE CONTRASEÑA CON ESPACIOS HASTA 50 CARACTERES
            if((strcmp(u,u1)==0)&&(strcmp(c,c1)==0)){//COMPARAR CONTRASEÑA Y USUARIO
                cout<<"\n\n\n\n\t\t\t----Iniciando Sesion----";
                system("clear");
                cout<<"\n\t\t     ----Inicio de sesion exitoso----";
                system("sleep 3s");
                cout<<"\n\t----¡Bienvenido nuevamente a su consola GameStation!----"<<endl;
                cout<<"\n\n\n";
                system("sleep 3s");
                system("clear");
                break;
            }
            else if((strcmp(u,u1)==0)&&(strcmp(c,c1)!=0)){
                cout<<"\n\n\n\n\t----La Contrasenia que ingreso es incorrecta----\n\n\n\n"<<endl;
                system("sleep 2s");
                system("clear");
            }
            else if((strcmp(u,u1)!=0)&&(strcmp(c,c1)==0)){
                cout<<"\n\n\n\n\t----El Usuario que ingreso es incorrecto----\n\n\n\n"<<endl;
                system("sleep 2s");
                system("clear");
            }
            else if((strcmp(u,u1)!=0)&&(strcmp(c,c1)!=0)){
                cout<<"\n\n\n\n\t----El Usuario y contrasenia que ingreso son incorrectos----\n\n\n\n"<<endl;
                system("sleep 2s"),
                system("clear");
            }
}
}


class gamess{public:
	void menu(){
		system("clear");
		cout<<setw(45)<<"TAMAGOTCHI  2022"<<endl;
		cout<<endl<<setw(52)<<"Powered by Weimar&Mateo Games "<<endl;
		cout<<endl<<endl<<endl<<setw(45)<<"Cargando... "<<endl;
		system("sleep 2s");
		bool flag=false;
		for(;;){
			int op;
			system("clear");
			cout<<setw(50)<<"MENU PRINCIPAL"<<endl;
			cout<<"\nOpciones:"<<endl;
			cout<<"\t1 : Ver a mi mascota "<<endl;
			cout<<"\t2 : Nueva mascota"<<endl;
			cout<<"\t3 : Liberar mascota"<<endl;
			cout<<"\t0 : Salir del juego"<<endl;
			cout<<"\nIngrese opcion : ";cin>>op;
			switch (op){
				Usuario usr;
				case 1:
					system("clear");
					if(usr.revisar()){
						cout<<"\n\tTodavia no tienes mascota!"<<endl;
						system("sleep 1s");
						break;
					}
					else{
						bool f1=false;
						for(;;){
							system("clear");
							if(usr.mis_masc()==1){
								cout<<"Tu mascota ha muerto :("<<endl;
								usr.liberar();
								cout<<"Tu mascota fue enterrada "<<endl;
								system("sleep 6s");
								break;
							}
							else{
								cout<<"\nOpciones:"<<endl;
								cout<<"\t1 : alimentar "<<endl;
								cout<<"\t2 : jugar "<<endl;
								cout<<"\t3 : limpiar "<<endl;
								cout<<"\t0 : salir "<<endl;
								cout<<"\nIngrese : ";cin>>op;
								switch (op){
									case 1:
										usr.aumento(1);
										break;
									case 2:
										usr.aumento(2);
										break;
									case 3:
										usr.aumento(3);
										break;
									case 0:
										f1=true;
										break;
									default :
									cout<<"Opcion invalida!"<<endl;
										system("sleep 1s");
										break;
								}
								if(f1){
									break;
								}
							}
						}
						break;
					}
				case 2:
					system("clear");
					usr.nuevo();
					system("sleep 2s");
					break;
				case 3:
					int aux;
					system("clear");
					if(usr.revisar()){
						cout<<"\n\tTodavia no tienes mascota!"<<endl;
						system("sleep 2s");
						break;
					}
					cout<<"Esta seguro de liberar a su mascota? Ya no podra recuperarla"<<endl;
					cout<<"\n1. Si \t2. No  \nSu opcion : ";cin>>aux;

					if(aux==1){
						usr.liberar();
						cout<<"Su mascota ha sido liberada"<<endl;
						system("sleep 2s");
					}
					break;
				case 0:
					system("clear");
					cout<<endl<<endl<<endl<<setw(50)<<"GRACIAS POR JUGAR!!"<<endl;
					system("sleep 1s");
					system("clear");
					flag=true;
					break;
				default : cout<<"Opcion invalida!"<<endl;
					system("sleep 1s");
					break;

			}
			if(flag){break;}
		}
	}

	void juegoss(){
	    system("clear");
	for (;;){
	system("clear");
	    fflush(stdin);
	    cout<<endl;
	    cout << "\t\t*\t\tGAMESTATION 4\t          *\t"<<endl;
	    cout<<"\t\t********************************************"<<endl;
	    cout << "\t\t*\t     SELECCION DE JUEGOS\t   *\t"<<endl;
	    cout<<"\t\t********************************************\n"<<endl;
	    cout<<"\t\tQue juego desea jugar?\n"<<endl;;
	    cout << "\t\t1.- Laberinto.\n";
	    cout << "\t\t2.- Tamagochi.\n";
	    cout<<  "\t\t3.- Apagar consola\n";
	    cout<<"\t\t**************************************************************\n"<<endl;
	    int opc;
	    cout << "\tDigite su opcion y luego enter>>> ";cin >> opc;
	    switch(opc){
			case 1:{
			system("clear");
		        laberinto mi_laberinto;
		        mi_laberinto.posicion();
		        mi_laberinto.game();
		        break;
				}
				case 2:{
				    menu();
					break;
				}
				case 3:{
				    cout<<"\t\tApagando consola...";
				    cout<<"\n\nPowered by Weimar&Mateo Games"<<endl;
				    system("sleep 1s");
		        exit(0);
					break;
				}
			}

	    }
	}
;


int main(){
system("clear");
usuario();
gamesss gamesss;
gamesss.juegos();
gamesss.menu();

return 0;
}
