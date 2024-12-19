#include<iostream>
#include<string>
using namespace std;
class Persona
{
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		void leer();
		void escribir();
};
Persona::Persona(string n, int e)
{
	nombre=n;
	edad=e;
}
void Persona::leer()
{
	cout<<"soy "<<nombre<<" y estoy leyendo un libro, ademas tengo "<<edad<<" anios "<<endl;
}
void Persona::escribir()
{
	cout<<"soy "<<nombre<<" y estoy escribiendo un cuento, ademas tengo "<<edad<<" anios "<<endl;
}
int main()
{
	const int tam=3;
	Persona per[tam]={
		{"mario",12},
		{"luis",23},
		{"valeria",18}
	};
	for(int i=0; i<tam; i++)
	{
		per[i].leer();
	}
	for(int i=0; i<tam; i++)
	{
		per[i].escribir();
	}
	return 0;
}