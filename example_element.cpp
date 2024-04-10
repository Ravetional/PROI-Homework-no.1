// Autor: Adam Czubak
// Przykładowe zaprezentowanie działania metod klasy w funkcji "main".

#include <iostream>
#include "element.h"

using namespace std;

int main()
{
    Element element("oxygen", "O", 8, 15.999, 16, 2);
    cout << element.get_name() << endl;
    cout << element.get_symbol() << endl;
    cout << element.get_atomic_number() << endl;
    cout << element.get_atomic_mass() << endl;
    cout << element.get_group_number() << endl;
    cout << element.get_period_number() << endl;
    cout << element.protons_number() << endl;
    cout << element.electrons_number() << endl;
    cout << element.electron_shells_number() << endl;
    cout << element.valence_electrons_number() << endl;
    element.set_name("carbon");
    element.set_symbol("C");
    element.set_atomic_number(6);
    element.set_atomic_mass(12.011);
    element.set_group_number(14);
    element.set_period_number(2);
    cout << element.get_name() << endl;
    cout << element.get_symbol() << endl;
    cout << element.get_atomic_number() << endl;
    cout << element.get_atomic_mass() << endl;
    cout << element.get_group_number() << endl;
    cout << element.get_period_number() << endl;
    cout << element.protons_number() << endl;
    cout << element.electrons_number() << endl;
    cout << element.electron_shells_number() << endl;
    cout << element.valence_electrons_number() << endl;
    
    return 0;
}