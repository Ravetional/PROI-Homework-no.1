// Autor: Adam Czubak
// Utworzenie pliku nagłówkowego klasy Element.
// Definicja klasy, jej atrybutów i metod.

#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

class Element
{
    // Klasa element reprezentująca pierwiastek i jego atrybuty.
    private:
        std::string name;
        std::string symbol;
        int atomic_number;
        double atomic_mass;
        int group_number;
        int period_number;
    public:
        // Konstruktor klasy:
        Element(std::string name, std::string symbol, int atomic_number, double atomic_mass, int group_number, int period_number);
        // Zwraca nazwę pierwistka:
        std::string get_name();
        // Ustawia nazwę pierwiastka:
        void set_name(std::string new_name);
        // Zwraca symbol pierwiastka:
        std::string get_symbol();
        // Ustawia symbol pierwiastka:
        void set_symbol(std::string new_symbol);
        // Zwraca liczbę atomową pierwiastka:
        int get_atomic_number();
        // Ustawia liczbę atomową pierwiastka:
        void set_atomic_number(int new_atomic_number);
        // Zwraca masę atomową pierwiastka:
        double get_atomic_mass();
        // Ustawia masę atomową pierwiastka:
        void set_atomic_mass(double new_atomic_mass);
        // Zwraca numer grupy, w której leży pierwiastek:
        int get_group_number();
        // Ustawia numer grupy, w której leży pierwiastek:
        void set_group_number(int new_group_number);
        // Zwraca numer okresu, w którym leży pierwiastek:
        int get_period_number();
        // Ustawia numer okresu, w którym leży pierwiastek:
        void set_period_number(int new_period_number);
        // Zwraca liczbę protonów pierwiastka:
        int protons_number();
        // Zwraca liczbę elektronów pierwiastka:
        int electrons_number();
        // Zwraca liczbę powłok elektronowych pierwiastka:
        int electron_shells_number();
        // Zwraca liczbę elektronów walencyjnych pierwiastka:
        int valence_electrons_number();
};

#endif