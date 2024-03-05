#pragma once
#include"iostream"
#include"fstream"
#include"string"

using namespace std;

class Dibujo{
    private:
    fstream file;

    public:
    Dibujo()()
    Dibujo(string path){
        file.open(",/assests/rocky.txt");

    }
    ~Dibujo(){
        file.close();
    }
    void Dibujar(){
        string linea:
        while(getline(file,lina))sl./{
            cout<< linea << endl;
        }
    }
};