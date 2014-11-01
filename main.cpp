#include <iostream>

using namespace std;

class Animal
{
public:
    //en esta clase publica se declaran las variables de edad y nombre que seran utilizadas
    int edad;
    string nombre;

    //constructor vacio de animal (padre)
    Animal()
    {
    }

    //el get del nombre devuelve la variable nombre
    string getNombre()
    {
        return nombre;
    }

    //el get de la edad devuelve la variable edad
    int getEdad()
    {
        return edad;
    }

    //el set de nombre recibe como parametro name que sera igual a lo que tenga nombre
    void setNombre(string name)
    {
        nombre = name;
    }

    //el set de edad recibe como parametro age que sera igual a lo que tenga edad
    void setEdad(int age)
    {
        edad = age;
    }
};


class Gato : public Animal
{
public:
    //la clase gato hereda las propiedades de la clase Animal
    //la funcion gato recibe de parametros edad y nombre
    Gato(int edad, string nombre)
    {
        //se hace un set de la edad y del nombre
        setEdad(edad);
        setNombre(nombre);
    }
    //la funcion maullido solo devuelve un string
    string maullido()
    {
        return "miau";
    }
};
class Perro : public Animal
{
public:
    //la clase gato hereda las propiedades de la clase Animal
    //la funcion gato recibe de parametros edad y nombre
    Perro(int edad, string nombre)
    {
        //se hace un set de la edad y del nombre
        setEdad(edad);
        setNombre(nombre);
    }
    //la funcion ladrido solo devuelve un string
    string ladrido()
    {
        return "guau";
    }

};

int main()
{
    //aqui se puede comprobar que la herencia se realizo correctamente
    //se crea un objeto y a la clase perro se le da valor a edad y se asigna una cadena a nombre
    Perro dog = Perro(8, "Bruno");

    //se imprimen los resultados de cada funcion
    cout<<"Nombre del perro: "<<dog.getNombre()<<endl;
    cout<<"Edad del perro: "<<dog.getEdad()<<endl;
    cout<<"Ladrido: "<<dog.ladrido()<<endl;


    //se crea un objeto y a la clase gato se le da valor a edad y se asigna una cadena a nombre
    Gato cat = Gato(5, "Peluca");

    //se imprimen los resultados de cada funcion
    cout<<"Nombre del gato: "<<cat.getNombre()<<endl;
    cout<<"Nombre del edad: "<<cat.getEdad()<<endl;
    cout<<"Maullido: "<<cat.maullido()<<endl;

    return 0;
}
