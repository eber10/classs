#include<iostream>
#include<string>
using namespace std;
class Rector
{
	private:
		string nombre;
	public:
		Rector(string);
		void mostrarRector();
};
Rector::Rector(string n)
{
	nombre=n;
}
void Rector::mostrarRector()
{
	cout<<"Dr. "<<nombre<<endl;
}
class Universidad
{
	private:
		string denominacion;
		string ciudad;
		Rector *pRector;
	public:
		Universidad(string,string);
		void mostrarUniversidad();
		void asignarRector(Rector *);
};
Universidad::Universidad(string d, string c)
{
	denominacion=d;
	ciudad=c;
	pRector=NULL;
}
void Universidad::mostrarUniversidad()
{
	if(pRector==NULL)
	{
		cout<<"universidad: "<<denominacion<<endl;
		cout<<"ciudadd: "<<ciudad<<endl;
		cout<<"Rector: por asignar "<<endl;
	}
	else
	{
		cout<<"universidad: "<<denominacion<<endl;
		cout<<"ciudadd: "<<ciudad<<endl;
		cout<<"Rector: "; pRector->mostrarRector();
	}
}
void Universidad::asignarRector(Rector *nr)
{
	pRector=nr;
}
int main()
{
	
	Rector rec[3]={
		{"luis espinoza"},
		{"mateo perez"},
		{"pedro castillo"}
	};
	
	for(int i=0; i<3; i++)
	{
		rec[i].mostrarRector();
		cout<<"........................"<<endl;
	}
	cout<<"universidades "<<endl;
	Universidad u[3]={
		{"unjbg","tacna"},
		{"upt","tacna"},
		{"cima","tacna"}
	};
	for(int i=0; i<3; i++)
	{
		u[i].asignarRector(&rec[i]);
		u[i].mostrarUniversidad();
		cout<<"............................."<<endl;
	}
	
	return 0;
}