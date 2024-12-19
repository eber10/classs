#include<iostream>
#include<string>
using namespace std;
class Persona
{
	protected:
		string nombre;
		string dni;
		int edad;
	public:
		Persona(string,string,int);
		void mostrarDatos();
};
Persona::Persona(string n, string d, int e)
{
	nombre=n;
	dni=d;
	edad=e;
}
void Persona::mostrarDatos()
{
	cout<<"nombre: "<<nombre<<endl;
	cout<<"Dni: "<<dni<<endl;
	cout<<"Edad: "<<edad<<endl;
}
class Docente:public Persona
{
	private:
		int sueldo;
		string especialidad;
	public:
		Docente(string, string, int, int, string);
		void mostrarDocente();
};
Docente::Docente(string n, string d, int e, int s, string espe):Persona(n,d,e)
{
	sueldo=s;
	especialidad=espe;
}
void Docente::mostrarDocente()
{
	mostrarDatos();
	cout<<"sueldo: "<<sueldo<<endl;
	cout<<"especialidad: "<<especialidad<<endl;
}
class Estudiante:public Persona
{
	private:
		int notas[5];
		int Nnotas;
		string codigo;
	public:
		Estudiante(string,string,int,int[],int,string);
		void mostrarEstudiante();
};
Estudiante::Estudiante(string n, string d, int e, int no[], int Not, string c):Persona(n,d,e)
{
	Nnotas=Not;
	for(int i=0; i<Nnotas; i++)
	{
		notas[i]=no[i];
	}
	codigo=c;
}
void Estudiante::mostrarEstudiante()
{
	mostrarDatos();
	cout<<"codigo: "<<codigo<<endl;
	cout<<"numero de notas: "<<Nnotas<<endl;
	cout<<"notas: ";
	for(int i=0; i<Nnotas; i++)
	{
		cout<<notas[i]<<" ";
	}
	cout<<endl;
}
int main()
{

	int nota1[5]={11,12,10,7,11};
	int nota2[5]={10,17,14,13,20};
	int nota3[5]={11,16,19,20,18};
	Estudiante est[3]={
		{"luca","872424",17,nota1,5,"2022-119035"},
		{"valentina","837434",16,nota2,5,"2022-119037"},
		{"mario","83424243",19,nota3,5,"2022-119029"}
	};
	for(int i=0; i<3; i++)
	{
		est[i].mostrarEstudiante();
		cout<<"........................."<<endl;
	}
	cout<<endl;
	Docente doc[3]={
		{"mario","87234343",27,450,"doctor"},
		{"luis","87654656",26,1500,"enfermero"},
		{"pedro","7634384",19,500,"psicologo"}
	};
	for(int i=0; i<3; i++)
	{
		doc[i].mostrarDocente();
		cout<<"....................."<<endl;
	}
	
	return 0;
	
}