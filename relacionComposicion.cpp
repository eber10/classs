#include<iostream>
#include<string>
using namespace std;
class Aula
{
	private:
		string nombre;
		int Nalumnos;
	public:
		Aula(string,int);
		void mostrarAula();
};
Aula::Aula(string n, int Nalum)
{
	nombre=n;
	Nalumnos=Nalum;
}
void Aula::mostrarAula()
{
	cout<<"Aula: "<<nombre<<endl;
	cout<<"cantidad de alumnos: "<<Nalumnos<<endl;
}
class Colegio
{
	private:
		string nombre;
		Aula* secciones[5];
		int nAulas;
	public:
		Colegio(string);
		void mostrarColegio();
		void crearAula();
};
Colegio::Colegio(string n)
{
	nombre=n;
	nAulas=0;
}
void Colegio::mostrarColegio()
{
	if(nAulas==0)
	{
		cout<<"colegio: "<<nombre<<endl;
		cout<<"numero de aulas: 0 "<<endl;
	}
	else
	{
		cout<<"colegio: "<<nombre<<endl;
		cout<<"numero de aulas "<<nAulas<<endl;
		for(int i=0; i<nAulas; i++)
		{
			secciones[i]->mostrarAula();
		}
	}
}
void Colegio::crearAula()
{
	string nom;
	int cant;
	cout<<"ingrese la cantidad aulas: "; cin>>nAulas;
	for(int i=0; i<nAulas; i++)
	{
		cout<<"nombre de la seccion: "; cin>>nom;
		cout<<"cantidad de alumnos: "; cin>>cant;
		secciones[i]=new Aula(nom,cant);
	}
}
int main()
{
	Colegio c1[3]={
		{"cima"},
		{"lastenia"},
		{"wiese"}
	};
	for(int i=0; i<3; i++)
	{
		c1[i].crearAula();
	}
	for(int i=0; i<3; i++)
	{
		c1[i].mostrarColegio();
	}
	return 0;
	
}