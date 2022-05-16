#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;

class empresa{
public:
    void mostrarLog();
    void menuPrincipal();
    void menuMantenimiento();
    void menuEmpleados();
    void registrarEmpleado();
    void modificarEmpleado();
    void eliminarEmpleado();
    void mostrarDatosEmpleados();
    void menuDepartamentos();
    void registrarDepto();
    void modificarDepto();
    void eliminarDepto();
    void mostrarDatosDepto();
private:
    string documentoIdentificacion, nombre, direccion, edad, correo, telefono, estudios, puesto, sueldo, desicion, busquedaDatos, numDepto, nombreDepto, telefonoDepto, direccionDepto;
};

const std::string currentDateTime() {
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    return buf;
};

void empresa::mostrarLog(){
    fstream log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro a mostrar bitacora, ";
    log.close();
    string line;
    log.open("bitacora.dat");
    if(log.is_open()){
        system("cls");
        while( getline(log, line)){
            cout << "\n"<<line << endl;
        }
        log.close();
    }
    cout<<"\n\n\t\tGRACIAS POR USAR EL RPOGRAMA DEL GRUPO 2 :)";
    cout << "\n\t\t";system("pause");
}

void empresa::menuPrincipal(){
    system ("cls");
    fstream log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu principal, ";
    log.close();
    int menu;
    cout << "\n\t\t\tBienvenido al programa de ==RECURSOS HUMANOS==";
    cout << "\n\n\t\tElija el numero del menu al que quiera ingresar\n"<< endl << "\t\t[1] Mantenimiento\n" << "\t\t[2] Nomina\n" << "\t\t[3] Poliza\n" << "\t\t[4] Impuestos\n" << "\t\t[6] Salir del programa\n";cout<<"\n\t\t";cin >> menu;
    switch(menu){
    case 1:
        menuMantenimiento();
        break;
    case 2:
        cout<<"hola";
        break;
    case 3:
        cout<<"hola";
        break;
    case 4:
        cout<<"hola";
        break;
    case 5:
        mostrarLog();
        break;
    case 6:
        cout << "\n\t\t¿Quiere salir del programa? [ si / no ] : "; cin>>desicion;
        if (desicion=="si"){
            cout<<"\n\n\t\tGRACIAS POR USAR EL RPOGRAMA DEL GRUPO 2 :)";
            cout<<"\n\n\t\t";system("pause");
            return exit (1);
        }
        else {
            return menuPrincipal();
        break;
        }
    }
}

void empresa::menuMantenimiento(){
    system("cls");
    fstream log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu mantenimiento, ";
    log.close();
    int menu;
    cout << "\n\t\tBienvenido al --MENU MANTENIMIENTO--" << endl;
    cout << "\n\t\tElija el numero del menu al que quiere ingresar\n" << endl << "\t\t[1] Empleados\n" << "\t\t[2] Departamentos\n" << "\t\t[3] Salir al --MENU PRINCIPAL--\n";cout<<"\n\t\t"; cin >> menu;
    switch (menu){
    case 1:
        menuEmpleados();
        break;
    case 2:
        menuDepartamentos();
        break;
    case 3:
        cout << "\n\tSaliendo al --MENU PRINCIPAL--" << endl;
        cout<<"\t";system("pause");
        return menuPrincipal();
        break;
    }
}

void empresa::menuEmpleados(){
    system("cls");
    fstream log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu empleados, ";
    log.close();
    int menu;
    cout << "\n\t\tBienvenido al --MENU MANTENIMIENTO EMPLEADO--" << endl;
    cout << "\n\t\tElija el numero del menu al que quiere ingresar\n" << endl << "\t\t[1] Registrar Empleados\n" << "\t\t[2] Modificar Empleados\n" <<  "\t\t[3] Eliminar Empleado\n" << "\t\t[4] Mostrar Datos Empleados\n" << "\t\t[5] Salir al --MENU PRINCIPAL--\n";cout<<"\n\t\t"; cin >> menu;
    switch (menu){
    case 1:
        registrarEmpleado();
        break;
    case 2:
        modificarEmpleado();
        break;
    case 3:
        eliminarEmpleado();
        break;
    case 4:
        mostrarDatosEmpleados();
        break;
    case 5:
        cout << "\n\tSaliendo al --MENU MANTENIMIENTO--" << endl;
        cout<<"\t";system ("pause");
        return menuMantenimiento();
        break;
    }
}

void empresa::registrarEmpleado(){
    system("cls");
    fstream baseDatos, log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu registrar empleado, ";
    log.close();
    cout << "\n\t\t\tEntrando al menu --REGISTRAR EMPLEADOS--\n" << endl;
    cout << "\n\t¿Quires salir al --MENU EMPLEADO--? [ si / no ] : "; cin >> desicion;
    if (desicion=="si"){
        return menuEmpleados();
    }
    else {
        cout << "\n\t\tIngrese el numero de documento de identificacion de la persona: "; cin >> documentoIdentificacion;
        cout << "\t\tIngrese el nombre de la persona a registrar: "; cin >> nombre;
        cout << "\t\tIngrese la edad de la persona a registrar: "; cin >> edad;
        cout << "\t\tIngrese el correo de la persona a registrar: "; cin >> correo;
        cout << "\t\tIngrese el numero de telefono de la persona a registrar: "; cin >> telefono;
        cout << "\t\tIngrese la direccion de la persona a registrar: "; cin >> direccion;
        cout << "\t\tIngrese el nivel de estudios de la persona a registrar: "; cin >> estudios;
        cout << "\t\tIngrese el puesto de la persona a registrar: "; cin>>puesto;
        cout << "\t\tIngrese el sueldo de la persona a registrar: "; cin>>sueldo;
        cout << "\n\t--Registro completado--\n" << endl;
        log.open("bitacora.dat",ios::app|ios::out|ios::binary);
        log<< "registro a: "<<documentoIdentificacion<<", ";
        log.close();
        baseDatos.open("empleados.dat",ios::app | ios::out | ios::binary);
        baseDatos<<std::left<<std::setw(15)<< documentoIdentificacion <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< edad <<std::left<<std::setw(15)<< correo <<std::left<<std::setw(15)<< telefono <<std::left<<std::setw(15)<< direccion <<std::left<<std::setw(15)<< estudios << std::left<<std::setw(15)<< puesto << std::left<<std::setw(15)<< sueldo <<"\n";
        baseDatos.close();
    }
    cout <<"\n\n\t\tRegresando al --MENU EMPLEADOS--";
    cout<<"\n\t";system("pause");
    return menuEmpleados();
}

void empresa::modificarEmpleado(){
    system("cls");
    fstream baseDatos, modBaseDatos, log;
    cout << "\n\t\t\tEntrando al menu --MODIFICAR EMPLEADOS--" << endl;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu modificar empleados, ";
    log.close();
    baseDatos.open("empleados.dat",ios::in|ios::binary);
    if(!baseDatos){
        cout << "\n\t\tNo se encontro el archivo" << endl;
        baseDatos.close();
        cout <<"\n\n\t\t\tRegresando al --MENU EMPLEADOS--";
        cout<<"\n\t";system("pause");
        return menuEmpleados();
    }
    else {
        cout << "\n\t\t\tIngrese el numero de Documento de Identificacion de la persona que busca: "; cin >> busquedaDatos;
        modBaseDatos.open("temporalEmpleados.dat",ios::out|ios::binary);
        baseDatos>>documentoIdentificacion>>nombre>>edad>>correo>>telefono>>direccion>>estudios>>puesto>>sueldo;
        while (!baseDatos.eof()){
            if (busquedaDatos!=documentoIdentificacion){
                modBaseDatos <<std::left<<std::setw(15)<< documentoIdentificacion <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< edad <<std::left<<std::setw(15)<< correo <<std::left<<std::setw(15)<< telefono << std::left<<std::setw(15)<< direccion << std::left<<std::setw(15)<< estudios << std::left<<std::setw(15)<< puesto << std::left<<std::setw(15)<< sueldo <<"\n";
            }
            else {
                cout << "\n\t\tIngrese el numero de documento de identificacion de la persona: "; cin >> documentoIdentificacion;
                cout << "\t\tIngrese el nombre de la persona a registrar: "; cin >> nombre;
                cout << "\t\tIngrese la edad de la persona a registrar: "; cin >> edad;
                cout << "\t\tIngrese el correo de la persona a registrar: "; cin >> correo;
                cout << "\t\tIngrese el numero de telefono de la persona a registrar: "; cin >> telefono;
                cout << "\t\tIngrese la direccion de la persona a registrar: "; cin >> direccion;
                cout << "\t\tIngrese el nivel de estudios de la persona a registrar: "; cin >> estudios;
                cout << "\t\tIngrese el puesto de la persona a registrar: "; cin>>puesto;
                cout << "\t\tIngrese el sueldo de la persona a registrar: "; cin>>sueldo;
                log.open("bitacora.dat",ios::app|ios::out|ios::binary);
                log<<"busco a: "<<busquedaDatos<<" y la modificacion es: "<<", ";
                log.close();
                modBaseDatos <<std::left<<std::setw(15)<< documentoIdentificacion <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< edad <<std::left<<std::setw(15)<< correo <<std::left<<std::setw(15)<< telefono << std::left<<std::setw(15)<< direccion << std::left<<std::setw(15)<< estudios << std::left<<std::setw(15)<< puesto << std::left<<std::setw(15)<< sueldo <<"\n";
            }
            baseDatos>>documentoIdentificacion>>nombre>>edad>>correo>>telefono>>direccion>>estudios>>puesto>>sueldo;
        }
        modBaseDatos.close();
        baseDatos.close();
    if (baseDatos.is_open())
        baseDatos.close();
    if (modBaseDatos.is_open())
        modBaseDatos.close();

    if( remove( "empleados.dat" ) != 0 )
        perror( "\n\t\tError deleting file" );
    else
        puts( "\n\t\tFile successfully deleted" );

    if (rename("temporalEmpleados.dat","empleados.dat") != 0)
        perror("\n\t\tError renaming file");
    else
        cout << "\n\t\tFile renamed successfully";
    }
    cout <<"\n\n\t\tRegresando al --MENU EMPLEADOS--";
    cout<<"\n\t";system("pause");
    return menuEmpleados();
}

void empresa::eliminarEmpleado(){
    system("cls");
	fstream baseDatos,modBaseDatos,log;
	log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu eliminar empleado, ";
    log.close();
	int found=0;
	cout << "\n\t\t\tEntrando al menu --ELIMINAR EMPLEADOS--" << endl;
	baseDatos.open("empleados.dat",ios::in|ios::binary);
	if(!baseDatos)
	{
		cout<<"\n\t\t\tNo hay informacion...\a";
		baseDatos.close();
	}
	else
	{
		cout << "\n\t\tIngrese el numero de Documento de Identificacion de la persona que busca: "; cin >> busquedaDatos;
		modBaseDatos.open("temporalEmpleados.dat", ios::app | ios::out | ios::binary);
		baseDatos>>documentoIdentificacion>>nombre>>edad>>correo>>telefono>>direccion>>estudios>>puesto>>sueldo;
		while(!baseDatos.eof())
		{
			if(busquedaDatos!=documentoIdentificacion)
			{
				modBaseDatos <<std::left<<std::setw(15)<< documentoIdentificacion <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< edad <<std::left<<std::setw(15)<< correo <<std::left<<std::setw(15)<< telefono << std::left<<std::setw(15)<< direccion << std::left<<std::setw(15)<< estudios << std::left<<std::setw(15)<< puesto << std::left<<std::setw(15)<< sueldo <<"\n";
			}
			else
			{
				found++;
				log.open("bitacora.dat",ios::app|ios::out|ios::binary);
                log<<"elimino a: "<<busquedaDatos<<", ";
                log.close();
				cout << "\n\t\t\tBorrado de informacion exitoso\a";
			}
			baseDatos>>documentoIdentificacion>>nombre>>edad>>correo>>telefono>>direccion>>estudios>>puesto>>sueldo;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Empleado no encontrado...\a";
		}
		baseDatos.close();
		modBaseDatos.close();
    if (baseDatos.is_open())
        baseDatos.close();
    if (modBaseDatos.is_open())
        modBaseDatos.close();

    if( remove( "empleados.dat" ) != 0 )
        perror( "\n\t\tError deleting file" );
    else
        puts( "\n\t\tFile successfully deleted" );

    if (rename("temporalEmpleados.dat","empleados.dat") != 0)
        perror("\n\t\tError renaming file");
    else
        cout << "\n\t\tFile renamed successfully";
	}
    cout <<"\n\n\t\t\tRegresando al --MENU EMPLEADOS--";
    cout<<"\n\t";system("pause");
    return menuEmpleados();
}

void empresa::mostrarDatosEmpleados(){
    system("cls");
    fstream baseDatos, log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu mostrar datos empleado, ";
    log.close();
    cout << "\n\t\t\tEntrando al --MENU MOSTRAR DATOS EMPLEADOS--";
    cout << "\n\n\t\t¿Quiere buscar a una persona en especifico? [ si / no ] : "; cin>>desicion;
    if (desicion=="si"){
        int datos=0;
        baseDatos.open("empleados.dat",ios::in|ios::binary);
        if(!baseDatos)
        {
            cout<<"\n\t\tError";
            cout<<"\n\t\t\tNo se encontro el archivo, asegurese de que el archivo este en la misma carpeta que el programa";
            baseDatos.close();
        }
        else
        {
            cout << "\n\t\t\tEntrando en el menu --BUSCAR--"<<endl;
            cout << "\n\t\tIngrese el numero del Documento de Identificacion de la persona a buscar: "; cin >> busquedaDatos;
            baseDatos>>documentoIdentificacion>>nombre>>edad>>correo>>telefono>>direccion>>estudios>>puesto>>sueldo;
            while(!baseDatos.eof()){
                if(busquedaDatos==documentoIdentificacion){
                    cout<<"\n\t\tDocumento de Identificacion: "<< documentoIdentificacion;
                    cout<<"\n\t\tNombre: " << nombre;
                    cout<<"\n\t\tEdad: "<< edad;
                    cout<<"\n\t\tCorreo Electronico: "<< correo;
                    cout<<"\n\t\tTelefono: "<< telefono;
                    cout<<"\n\t\tDireccion: "<< direccion;
                    cout<<"\n\t\tNivel de estudios: "<< estudios;
                    cout<<"\n\t\tPuesto o cargo: "<< puesto;
                    cout<<"\n\t\tSueldo: "<< sueldo;
                    datos++;
                    if (baseDatos.is_open()){
                        baseDatos.close();
                        cout<<"\n\n\t\tArchivo cerrado";}
                    cout<<"\n\n\t\t\tRegresando al --MENU EMPLEADO--";
                    cout<<"\n\t";system("pause");
                    return menuEmpleados();
                }
                baseDatos>>documentoIdentificacion>>nombre>>edad>>correo>>telefono>>direccion>>estudios>>puesto>>sueldo;
            }
            if(datos==0)
            {
                cout<<"\n\t\t\tNo se encontro ninguna coincidencia, intentelo de nuevo";
                cout <<"\n\n\t\t\tRegresando al --MENU MOSTRAR DATOS--";
                cout<<"\n\t";system("pause");
                return mostrarDatosEmpleados();
                if (baseDatos.is_open()){
                    baseDatos.close();
                    cout<<"\n\n\t\tArchivo cerrado";}
            }
        }
        if (baseDatos.is_open()){
            baseDatos.close();
            cout<<"\n\n\t\tArchivo cerrado";}
    }
    else {
        fstream baseDatos;
        int total=0;
        cout<<"\n\t\t\tEntrando al --MENU MOSTRAR DATOS EMPLEADOS"<<endl;
        baseDatos.open("empleados.dat",ios::in|ios::binary);
        if(!baseDatos){
            cout<<"\n\t\t\tError\n\t\t\tNo se encontro el archivo, asegurese de que el archivo se encuentre en la misma carpeta del programa";
            if (baseDatos.is_open()){
                baseDatos.close();
                cout<<"\n\n\t\tArchivo cerrado";}
            cout <<"\n\n\t\t\tRegresando al --MENU EMPLEADOS--";
            cout<<"\n\t";system("pause");
            return menuEmpleados();
        }
        else
        {
            baseDatos>>documentoIdentificacion>>nombre>>edad>>correo>>telefono>>direccion>>estudios>>puesto>>sueldo;
            while(!baseDatos.eof())
            {
                total++;
                cout<<"\n\n\t\tDocumento de Identificacion: "<< documentoIdentificacion;
                cout<<"\n\t\tNombre: " << nombre;
                cout<<"\n\t\tEdad: "<< edad;
                cout<<"\n\t\tCorreo Electronico: "<< correo;
                cout<<"\n\t\tTelefono: "<< telefono;
                cout<<"\n\t\tDireccion: "<< direccion;
                cout<<"\n\t\tNivel de estudios: "<< estudios;
                cout<<"\n\t\tPuesto o cargo: "<< puesto;
                cout<<"\n\t\tSueldo: "<< sueldo;
                baseDatos>>documentoIdentificacion>>nombre>>edad>>correo>>telefono>>direccion>>estudios>>puesto>>sueldo;
                //if (baseDatos.is_open()){
                  //  baseDatos.close();
                    //cout<<"\n\n\t\tArchivo cerrado";}
            }
            if(total==0){
                cout<<"\n\t\t\tEl archivo se encuentra vacio...";
                //if (baseDatos.is_open()){
                  //  baseDatos.close();
                    //cout<<"\n\n\t\tArchivo cerrado";}
            }
            if (baseDatos.is_open()){
                baseDatos.close();
                cout<<"\n\n\t\tArchivo cerrado";}
            cout <<"\n\n\t\tRegresando al --MENU EMPLEADOS--";
            cout<<"\n\t";system("pause");
            return menuEmpleados();
        }
        if (baseDatos.is_open()){
            baseDatos.close();
            cout<<"\n\n\t\tArchivo cerrado";}
    }
    if (baseDatos.is_open()){
        baseDatos.close();
        cout<<"\n\n\t\tArchivo cerrado";}
}

void empresa::menuDepartamentos(){
    system("cls");
    int menu;
    fstream log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu departamentos, ";
    log.close();
    cout << "\n\t\tBienvenido al --MENU MANTENIMIENTO DEPPARTAMENTOS--" << endl;
    cout << "\n\t\tElija el numero del menu al que quiere ingresar\n" << endl << "\t\t[1] Registrar Departamento\n" << "\t\t[2] Modificar Departamento\n" << "\t\t[3] Eliminar Departamento\n" << "\t\t[4] Mostrar Datos Departamentos\n" << "\t\t[5] Salir al --MENU PRINCIPAL--\n";cout<<"\n\t\t"; cin >> menu;
    switch (menu){
    case 1:
        registrarDepto();
        break;
    case 2:
        modificarDepto();
        break;
    case 3:
        eliminarDepto();
        break;
    case 4:
        mostrarDatosDepto();
        break;
    case 5:
        cout << "\n\tSaliendo al --MENU PRINCIPAL--" << endl;
        cout<<"\t";system("pause");
        return menuMantenimiento();
        break;
    }
}
void empresa::registrarDepto(){
    system("cls");
    fstream baseDatos, log;
    cout << "\n\t\t\tEntrando al menu --REGISTRAR DEPARTAMENTOS--\n" << endl;
    cout << "\n\t¿Quires salir al --MENU DEPARTAMENTOS--? [ si / no ] : "; cin >> desicion;
    if (desicion=="si"){
        return menuDepartamentos();
    }
    else {
        cout << "\n\t\tIngrese el numero del Departamento a registrar: "; cin >>numDepto;
        cout << "\t\tIngrese el nombre del Departamento a registrar: "; cin >> nombreDepto;
        cout << "\t\tIngrese el numero telefonico del Departamento a registrar: "; cin >> telefonoDepto;
        cout << "\t\tIngrese la direccion del Departamento a registrar: "; cin >> direccionDepto;
        cout << "\n\t--Registro completado--\n" << endl;
        log.open("bitacora.dat",ios::app|ios::out|ios::binary);
        log<<"registro el Depto: "<<numDepto<<", ";
        log.close();
        baseDatos.open("departamentos.dat",ios::app | ios::out | ios::binary);
        baseDatos<<std::left<<std::setw(15)<< numDepto <<std::left<<std::setw(15)<< nombreDepto <<std::left<<std::setw(15)<< telefonoDepto <<std::left<<std::setw(15)<< direccionDepto <<"\n";
        baseDatos.close();
    }
    cout <<"\n\n\t\tRegresando al --MENU DEPARTAMENTOS--";
    cout<<"\n\t";system("pause");
    return menuDepartamentos();
}

void empresa::modificarDepto(){
    system("cls");
    fstream baseDatos, modBaseDatos, log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu modificar Depto, ";
    log.close();
    cout << "\n\t\t\tEntrando al menu --MODIFICAR DEPARTAMENTOS--" << endl;
    baseDatos.open("departamentos.dat",ios::in|ios::binary);
    if(!baseDatos){
        cout << "\n\t\tNo se encontro el archivo" << endl;
        baseDatos.close();
        cout <<"\n\n\t\t\tRegresando al --MENU DEPARTAMENTOS--";
        cout<<"\n\t";system("pause");
        return menuDepartamentos();
    }
    else {
        cout << "\n\t\t\tIngrese el numero del Departamento que busca: "; cin >> busquedaDatos;
        modBaseDatos.open("temporalDeptos.dat",ios::out|ios::binary);
        baseDatos>>numDepto>>nombreDepto>>telefonoDepto>>direccionDepto;
        while (!baseDatos.eof()){
            if (busquedaDatos!=documentoIdentificacion){
                modBaseDatos <<std::left<<std::setw(15)<< numDepto <<std::left<<std::setw(15)<< nombreDepto <<std::left<<std::setw(15)<< telefonoDepto <<std::left<<std::setw(15)<< direccionDepto <<"\n";
            }
            else {
                cout << "\n\t\tIngrese el numero del Departamento a registrar: "; cin >>numDepto;
                cout << "\t\tIngrese el nombre del Departamento a registrar: "; cin >> nombreDepto;
                cout << "\t\tIngrese el numero telefonico del Departamento a registrar: "; cin >> telefonoDepto;
                cout << "\t\tIngrese la direccion del Departamento a registrar: "; cin >> direccionDepto;
                log.open("bitacora.dat",ios::app|ios::out|ios::binary);
                log<<"modifico el Depto: "<<busquedaDatos<<", ahora es: "<<numDepto<<", ";
                log.close();
                modBaseDatos <<std::left<<std::setw(15)<< numDepto <<std::left<<std::setw(15)<< nombreDepto <<std::left<<std::setw(15)<< telefonoDepto <<std::left<<std::setw(15)<< direccionDepto <<"\n";
            }
            baseDatos>>numDepto>>nombreDepto>>telefonoDepto>>direccionDepto;
        }
        modBaseDatos.close();
        baseDatos.close();
    if (baseDatos.is_open())
        baseDatos.close();
    if (modBaseDatos.is_open())
        modBaseDatos.close();

    if( remove( "departamentos.dat" ) != 0 )
        perror( "\n\t\tError deleting file" );
    else
        puts( "\n\t\tFile successfully deleted" );

    if (rename("temporalDeptos.dat","empleados.dat") != 0)
        perror("\n\t\tError renaming file");
    else
        cout << "\n\t\tFile renamed successfully";
    }
    cout <<"\n\n\t\tRegresando al --MENU DEPARTAMENTOS--";
    cout<<"\n\t";system("pause");
    return menuDepartamentos();
}

void empresa::eliminarDepto(){
    system("cls");
	fstream file,file1,log;
	log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu eliminar Depto, ";
    log.close();
	int found=0;
	cout<<"\n\t\t\tEntrando al --MENU ELIMINAR DEPARTAMENTO--"<<endl;
	file.open("departamentos.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el numero de Departamento que quiere borrar: ";cin>>busquedaDatos;
		file1.open("temporalDeptos.dat",ios::binary|ios::app | ios::out);
		file >> numDepto >> nombreDepto >> telefonoDepto >> direccionDepto;
		while(!file.eof())
		{
			if(busquedaDatos!=numDepto)
			{
				file1<<std::left<<std::setw(15)<< numDepto <<std::left<<std::setw(15)<< nombreDepto <<std::left<<std::setw(15)<< telefonoDepto <<std::left<<std::setw(15)<< direccionDepto << "\n";
			}
			else
			{
				found++;
				log.open("bitacora.dat",ios::app|ios::out|ios::binary);
                log<<"elimino el Depto: "<<busquedaDatos<<", ";
                log.close();
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> numDepto >> nombreDepto  >> telefonoDepto >> direccionDepto;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t numero de Departamento no encontrado...";
		}
		file1.close();
		file.close();
    if (file.is_open())
        file.close();
    if (file1.is_open())
        file1.close();

    if( remove( "departamentos.dat" ) != 0 )
        perror( "\n\t\tError deleting file" );
    else
        puts( "\n\t\tFile successfully deleted" );

    if (rename("temporalDeptos.dat","empleados.dat") != 0)
        perror("\n\t\tError renaming file");
    else
        cout << "\n\t\tFile renamed successfully";
	}
	cout <<"\n\n\t\tRegresando al --MENU DEPARTAMENTOS--";
    cout<<"\n\t";system("pause");
    return menuDepartamentos();
}

void empresa::mostrarDatosDepto(){
    system("cls");
    fstream baseDatos, log;
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    log<<"entro al menu mostrar datos Depto, ";
    log.close();
    cout << "\n\t\t\tEntrando al menu --MOSTRAR DATOS DEPARTAMENTOS--";
    cout << "\n\n\t\t¿Quiere buscar a un Departamento en especifico? [ si / no ] : "; cin>>desicion;
    if (desicion=="si"){
        int datos=0;
        baseDatos.open("departamentos.dat",ios::in|ios::binary);
        if(!baseDatos)
        {
            cout<<"\n\t\tError";
            cout<<"\n\t\t\tNo se encontro el archivo, asegurese de que el archivo este en la misma carpeta que el programa";
            baseDatos.close();
        }
        else
        {
            cout << "\n\t\t\tEntrando en el menu --BUSCAR--"<<endl;
            cout << "\n\t\tIngrese el numero del Departamento a buscar: "; cin >> busquedaDatos;
            baseDatos>>numDepto>>nombreDepto>>telefonoDepto>>direccionDepto;
            while(!baseDatos.eof()){
                if(busquedaDatos==numDepto){
                    cout<<"\n\t\tNumero de Departamento: "<< numDepto;
                    cout<<"\n\t\tNombre del Departamento: " << nombreDepto;
                    cout<<"\n\t\tTelefono del Departamento: "<< telefonoDepto;
                    cout<<"\n\t\tDireccion del Departamento: "<< direccionDepto;
                    datos++;
                    if (baseDatos.is_open()){
                        baseDatos.close();
                        cout<<"\n\n\t\tArchivo cerrado";}
                    cout<<"\n\n\t\t\tRegresando al --MENU DEPARTAMENTOS--";
                    cout<<"\n\t";system("pause");
                    return menuDepartamentos();
                }
                baseDatos>>numDepto>>nombreDepto>>telefonoDepto>>direccionDepto;
            }
            if(datos==0)
            {
                cout<<"\n\t\t\tNo se encontro ninguna coincidencia, intentelo de nuevo";
                cout <<"\n\n\t\t\tRegresando al --MENU MOSTRAR DATOS--";
                cout<<"\n\t";system("pause");
                return mostrarDatosDepto();
                if (baseDatos.is_open()){
                    baseDatos.close();
                    cout<<"\n\n\t\tArchivo cerrado";}
            }
        }
        if (baseDatos.is_open()){
            baseDatos.close();
            cout<<"\n\n\t\tArchivo cerrado";}
    }
    else {
        fstream baseDatos;
        int total=0;
        cout<<"\n\t\t\tEntrando al --MENU MOSTRAR DATOS DEPARTAMENTOS"<<endl;
        baseDatos.open("departamentos.dat",ios::in|ios::binary);
        if(!baseDatos){
            cout<<"\n\t\t\tError\n\t\t\tNo se encontro el archivo, asegurese de que el archivo se encuentre en la misma carpeta del programa";
            if (baseDatos.is_open()){
                baseDatos.close();
                cout<<"\n\n\t\tArchivo cerrado";}
            cout <<"\n\n\t\t\tRegresando al --MENU DEPARTAMENTOS--";
            cout<<"\n\t";system("pause");
            return menuDepartamentos();
        }
        else
        {
            baseDatos>>numDepto>>nombreDepto>>telefonoDepto>>direccionDepto;
            while(!baseDatos.eof())
            {
                total++;
                cout<<"\n\t\tNumero de Departamento: "<< numDepto;
                cout<<"\n\t\tNombre del Departamento: " << nombreDepto;
                cout<<"\n\t\tTelefono del Departamento: "<< telefonoDepto;
                cout<<"\n\t\tDireccion del Departamento: "<< direccionDepto;
                baseDatos>>numDepto>>nombreDepto>>telefonoDepto>>direccionDepto;
                if (baseDatos.is_open()){
                    baseDatos.close();
                    cout<<"\n\n\t\tArchivo cerrado";}
            }
            if(total==0){
                cout<<"\n\t\t\tEl archivo se encuentra vacio...";
                if (baseDatos.is_open()){
                    baseDatos.close();
                    cout<<"\n\n\t\tArchivo cerrado";}
            }
            if (baseDatos.is_open()){
                baseDatos.close();
                cout<<"\n\n\t\tArchivo cerrado";}
            cout <<"\n\n\t\tRegresando al --MENU DEPARTAMENTOS--";
            cout<<"\n\t";system("pause");
            return menuDepartamentos();
        }
        if (baseDatos.is_open()){
            baseDatos.close();
            cout<<"\n\n\t\tArchivo cerrado";}
    }
    if (baseDatos.is_open()){
        baseDatos.close();
        cout<<"\n\n\t\tArchivo cerrado";}
}

 int main(){
    system ("cls");
    string usuario, config0, config1, config2, contrasena, numU;
    fstream config, log;
    int datos=0;
    config.open("seguridad.dat",ios::in|ios::binary);
    log.open("bitacora.dat",ios::app|ios::out|ios::binary);
    if(!config){
        cout<<"\n\n\t\tError, no se encuentra un archivo escencial del programa...\a\n\n";
        exit(1);
    }
    else{
        cout << "\n\t\t\tBIENVENIDO AL PROGRAMA DE RECURSOS HUMANOS DEL GRUPO 2\n" << endl;
        cout << "\n\t\tIngrese el numero de usuario asignado: "; cin >> numU;
        config>>config0>>config1>>config2;
        while(!config.eof()){
            if(numU==config0){
                cout << "\n\t\tIngrese su usuario: "; cin >> usuario;
                cout << "\n\t\tIngrese su contrasena: ";cin>>contrasena;
                if (usuario==config1 && contrasena==config2){
                    system("cls");
                    log<<"\n\n\nUsuario: " << usuario <<"Fecha AAMMDD / Hora, minutos, segundos: " <<currentDateTime() <<", ";
                    log.close();
                    fstream bienvenida;
                    string line, desicion;
                    bienvenida.open("bienvenidos.txt");
                    if(bienvenida.is_open()){
                        cout << "\n";
                        while( getline(bienvenida, line)){
                            cout << "\t"<<line << endl;
                        }
                        bienvenida.close();
                        }
                    cout << "\n\t\t";system("pause");
                    empresa empleado;
                    empleado.menuPrincipal();
                }
                datos++;
                config.close();
            }
            log.close();
            config>>config0>>config1>>config2;
        }
        log.close();
        if(datos==0)
        {
            cout<<"\n\t\t\tPERMISO DENEGADO\a\n";
            config.close();
        }
    }
    log.close();
};
