
#include<iostream>
#include <cstring>

using namespace std;
void cargarCadena(char *pal, int tam);






class persona{

private:
    char _nombre[30];
    char _apellido[30];
    int _dni;

public:
        ///Constructores

        persona(){ //Constructor por omision
            strcpy(_nombre,"Sin nombre");
            strcpy(_apellido,"Sin apellido");
            _dni = 000;
        }




        /// SETTERS
        void setNombre(const char *n){
        strcpy(_nombre, n);
        }
        void setApellido(const char *a){
        strcpy(_apellido, a);
        }
        void setNombre(int d){
        _dni = d;
        }





        /// GETTERS
        char * getNombre(){
        return _nombre;
        }
        char * getApellido(){
        return _apellido;
        }
        int getDni(){
        return _dni;
        }






    /// Metodos

    cargar(){
        cout << "Ingrese el nombre :" << endl;
        cin >> _nombre;

        cout << "Ingrese el apellido :" << endl;
        cin >> _apellido;

        cout << "Ingrese el dni :" << endl;
        cin >> _dni;
    }

    mostrar(){
        cout << "Nombre : " << _nombre << endl;
        cout << "Apellido: " << _apellido << endl;
        cout << "Dni : " << _dni << endl;
    }


    ~persona(){
        cout << endl << "Me destruyo..." << endl;
    }

};




class fecha{

private:
    // Propiedades
    int _dia,_mes,_anio;

public:
    ///Constructores

    fecha (){
        _dia= 1;
        _mes = 1;
        _anio = 1999;
    }

    fecha (int dia,int mes,int anio){
        _dia = dia;
        _mes = mes;
        _anio = anio;
    }



    /// SETTERS
        void setDia(int dia){
            _dia=dia;
        }
        void setMes(int mes){
            _mes=mes;
        }
        void setAnio(int anio){
            _anio=anio;
        }

    /// GETTERS
        getDia(){
            return _dia;
        }
        getMes(){
            return _mes;
        }
        getAnio(){
            return _anio;
        }




    /// Metodos
    cargar(){
        cout << "Ingrese el Dia:" << endl;
        cin >> _dia;
        while (_dia < 0 || _dia > 31){
            cout << "Dia Invalido, ingrese nuevamente: "<< endl;
            cin >> _dia;
        }

        cout << "Ingrese el Mes:" << endl;
        cin >> _mes;
        while (_mes < 0 || _mes > 12){
            cout << "Mes Invalido, ingrese nuevamente: " << endl;
            cin >> _mes;
        }

        cout << "Ingrese el Anio:" << endl;
        cin >> _anio;
        while (_anio < 0 || _anio > 4000){
            cout << "Anio Invalido, ingrese nuevamente: " << endl;
            cin >> _anio;
        }

    }


    mostrar(){

    cout << _dia << "/" << _mes << "/" << _anio << endl;

    }

    ~fecha(){
        cout << endl << "Me destruyo (fecha)..." << endl;
    }

};










int main(){

    return 0;
}






void cargarCadena(char *pal, int tam){
    int i;
    fflush (stdin); ///limpia el buffer de entrada para que la carga se haga sin caracteres que hayan quedado sin usar
    for(i=0; i<tam;i++){
        pal[i]=cin.get();
        if(pal[i]=='\n')break;
    }
    pal[i]='\0';
    fflush(stdin); ///vuelve a limpiar el buffer para eliminar los caracteres sobrantes
}
