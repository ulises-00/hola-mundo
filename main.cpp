#include"iostream"
#include"list"

using namespace std;

#include"Mascota.hpp"
#include"Alimento.hpp"
#include"Dibujo.hpp"


int main(int argc, char const *argv[])
{
    list < Dibujo > dibujos;

    Dibujo dibujo1("./assests/rocky.txt");
    dibujo1.Dibujar();

    Dibujo dibujo2("./assests/roko.txt");
    dibujo2.Dibujar();

    // dibujos.push_front(dibujo1);
    // dibujos.push_front(dibujo2);

    dibujo.Dibujar();
    Mascota m1;
    Mascota m2;
    Mascota m3;

    list < Mascota > mascotas;
    mascotas.push_back(m1);
    mascotas.push_back(m2);
    mascotas.push_back(m3);

    Alimento alimento(5);
    for (auto &&mascotaActual : mascotas)
    {
        mascotaActual.Comer(alimento);
        
    }
    
    for (auto &&mascotaActual : mascotas)
    {
        cout<<"Mascota " << mascotaActual.LeerEnergia() << endl;
        
    }
    

    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);

    cout<< "Mascota " << m1.LeerEnergia() << endl;
    return 0;
}




