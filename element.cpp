// Autor: Adam Czubak
// Implementacja metod klasy.

#include "element.h"

Element::Element(std::string name,
                 std::string symbol,
                 int atomic_number,
                 double atomic_mass,
                 int group_number,
                 int period_number) : name(name), 
                                      symbol(symbol),
                                      atomic_number(atomic_number),
                                      atomic_mass(atomic_mass),
                                      group_number(group_number),
                                      period_number(period_number){}

std::string Element::get_name()
{
    return name;
}

void Element::set_name(std::string new_name)
{
    name = new_name;
}

std::string Element::get_symbol()
{
    return symbol;
}

void Element::set_symbol(std::string new_symbol)
{
    symbol = new_symbol;
}

int Element::get_atomic_number()
{
    return atomic_number;
}

void Element::set_atomic_number(int new_atomic_number)
{
    if (new_atomic_number >= 1 && new_atomic_number <= 118)
        atomic_number = new_atomic_number;
    else
        throw std::out_of_range("Atomic number must be between 1 and 118!");
}

double Element::get_atomic_mass()
{
    return atomic_mass;
}

void Element::set_atomic_mass(double new_atomic_mass)
{
    if(new_atomic_mass >= 1 && new_atomic_mass <= 294)
    {
        if (new_atomic_mass < atomic_number)
            throw std::out_of_range("Atomic mass must exceed atomic number!");
        else
            atomic_mass = new_atomic_mass;
    }    
    else
        throw std::out_of_range("Atomic mass must be between 1 and 294!");
}

int Element::get_group_number()
{
    return group_number;
}

void Element::set_group_number(int new_group_number)
{
    if (new_group_number >= 1 && new_group_number <= 18)
        group_number = new_group_number;
    else
        throw std::out_of_range("Group number must be between 1 and 18!");
}

int Element::get_period_number()
{
    return period_number;
}

void Element::set_period_number(int new_period_number)
{
    if (new_period_number >= 1 && new_period_number <= 7)
        period_number = new_period_number;
    else
        throw std::out_of_range("Period number must be between 1 and 7!");
}

int Element::protons_number()
{
    return atomic_number;
}

int Element::electrons_number()
{
    return atomic_number;
}

int Element::electron_shells_number()
{
    return period_number;
}

int Element::valence_electrons_number()
{
    int valence_electrons = 0;
    if (group_number >= 1 && group_number <= 12)
        valence_electrons = group_number;
    else if (group_number >= 13 && group_number <= 18)
        valence_electrons = group_number - 10;
    return valence_electrons;
}