#include<iostream>
#include<string>
using namespace std;
class Persona
{
	private:
		string nombre[3];
		int edad[3];
	public:
		Persona(string [], int []);
		void leer();
		void escribir();
};
Persona::Persona(string n[], int e[])
{
	for(int i=0; i<3; i++)
	{
		nombre[i]=n[i];
		edad[i]=e[i];
	}
}
void Persona::leer()
{
	for(int i=0; i<3; i++)
	{
		cout<<"soy "<<nombre[i]<<" y estoy leyendo un cuento, ademas tengo "<<edad[i]<<" anios "<<endl;
	}
}
void Persona::escribir()
{
	for(int i=0; i<3; i++)
	{
		cout<<"soy "<<nombre[i]<<" y estoy escribiendo una revista, ademas tengo "<<edad[i]<<" anios "<<endl;
	}
}
int main()
{
	string nom[]={"marco","noelia","mario"};
	int ed[]={12,18,20};
	Persona p1(nom,ed);
	p1.leer();
	p1.escribir();
	return 0;
}