#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

class Numero {
private:
    int numero;
public:
    // Constructor
    Numero(int n) {
        this->numero = n;
        cout << "Se ha creado un objeto en la clase 'Numero'" << endl;
    }

    // Destructor
    ~Numero() {
        cout << "Se ha destruido un objeto de la clase 'Numero' " << endl;
    }

    // Métodos get y set
    int getNumero() {
        return this->numero;
    }

    void setNumero(int n) {
        this->numero = n;
    }

    // Clase amiga
    friend void imprimirNumero(Numero e);
};

// Método amigo
void imprimirNumero(Numero e) {
    cout << "El numero del objeto es: " << e.numero << endl;
}

int main() {
    Numero e(5);
    imprimirNumero(e);
    e.setNumero(10);
    cout << "El numero del objeto es: " << e.getNumero() << endl;
    return 0;
}

