// Autor: Adam Czubak
// Testy jednostkowe metod zawartych w klasie.

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "element.h"


TEST_CASE("Getting name of the element.")
{
    Element Carbon("Carbon", "C", 6, 12.011, 2, 14);
    REQUIRE(Carbon.get_name() == "Carbon");
}

TEST_CASE("Getting symbol of the element.")
{
    Element Hydrogen("Hydrogen", "H", 1, 1.008, 1, 1);
    REQUIRE(Hydrogen.get_symbol() == "H");
}

TEST_CASE("Getting atomic number of the element.")
{
    Element Lithium("Lithium", "Li", 3, 6.94, 1, 2);
    REQUIRE(Lithium.get_atomic_number() == 3);
}

TEST_CASE("Getting mass atomic of the element.")
{
    Element Beryllium("Beryllium", "Be", 4, 9.0122, 2, 2);
    REQUIRE(Beryllium.get_atomic_mass() == 9.0122);
}

TEST_CASE("Getting group number of the element.")
{
    Element Sodium("Sodium", "Na", 11, 22.990, 1, 3);
    REQUIRE(Sodium.get_group_number() == 1);
}

TEST_CASE("Getting period number of the element.")
{
    Element Uranium("Uranium", "U", 92, 238.03, 7, 7);
    REQUIRE(Uranium.get_period_number() == 7);
}

TEST_CASE("Setting name of the element.")
{
    Element Carbon("-", "C", 6, 12.011, 2, 14);
    Carbon.set_name("Carbon");
    REQUIRE(Carbon.get_name() == "Carbon");
}

TEST_CASE("Setting symbol of the element.")
{
    Element Hydrogen("Hydrogen", "-", 1, 1.008, 1, 1);
    Hydrogen.set_symbol("H");
    REQUIRE(Hydrogen.get_symbol() == "H");
}

TEST_CASE("Setting atomic number of the element.")
{
    Element Lithium("Lithium", "Li", 0, 6.94, 1, 2);
    Lithium.set_atomic_number(3);
    REQUIRE(Lithium.get_atomic_number() == 3);
}

TEST_CASE("Setting atomic mass of the element.")
{
    Element Beryllium("Beryllium", "Be", 4, 0.0, 2, 2);
    Beryllium.set_atomic_mass(9.0122);
    REQUIRE(Beryllium.get_atomic_mass() == 9.0122);
}

TEST_CASE("Setting group number of the element.")
{
    Element Sodium("Sodium", "Na", 11, 22.990, 0, 3);
    Sodium.set_group_number(1);
    REQUIRE(Sodium.get_group_number() == 1);
}

TEST_CASE("Setting period number of the element.")
{
    Element Uranium("Uranium", "U", 92, 238.03, 7, 0);
    Uranium.set_period_number(7);
    REQUIRE(Uranium.get_period_number() == 7);
}

TEST_CASE("Getting protons number of the element.")
{
    Element Sodium("Sodium", "Na", 11, 22.990, 0, 3);
    REQUIRE(Sodium.protons_number() == 11);
}

TEST_CASE("Getting electrons number of the element.")
{
    Element Uranium("Uranium", "U", 92, 238.03, 7, 7);
    REQUIRE(Uranium.electrons_number() == 92);
}

TEST_CASE("Getting electron shells number of the element.")
{
    Element Hydrogen("Hydrogen", "H", 1, 1.008, 1, 1);
    REQUIRE(Hydrogen.electron_shells_number() == 1);
}

TEST_CASE("Getting valence electrons number of the element.")
{
    Element Carbon("Carbon", "C", 6, 12.011, 14, 2);
    REQUIRE(Carbon.valence_electrons_number() == 4);
}

TEST_CASE("Atomic number below lower limit.")
{
    Element Carbon("Carbon", "C", 6, 12.011, 14, 2);
    REQUIRE_THROWS_WITH(Carbon.set_atomic_number(-5), "Atomic number must be between 1 and 118!");
}

TEST_CASE("Atomic number above upper limit.")
{
    Element Sodium("Sodium", "Na", 11, 22.990, 0, 3);
    REQUIRE_THROWS_WITH(Sodium.set_atomic_number(119), "Atomic number must be between 1 and 118!");
}

TEST_CASE("Atomic mass lower than atomic number.")
{
    Element Carbon("Carbon", "C", 6, 12.011, 14, 2);
    REQUIRE_THROWS_WITH(Carbon.set_atomic_mass(5), "Atomic mass must exceed atomic number!");
}

TEST_CASE("Atomic mass below lower limit!")
{
    Element Uranium("Uranium", "U", 92, 238.03, 7, 7);
    REQUIRE_THROWS_WITH(Uranium.set_atomic_mass(0.675), "Atomic mass must be between 1 and 294!");
}

TEST_CASE("Atomic mass above upper limit.")
{
    Element Lithium("Lithium", "Li", 0, 6.94, 1, 2);
    REQUIRE_THROWS_WITH(Lithium.set_atomic_mass(294.3045), "Atomic mass must be between 1 and 294!");
}

TEST_CASE("Group number below lower limit.")
{
    Element Hydrogen("Hydrogen", "H", 1, 1.008, 1, 1);
    REQUIRE_THROWS_WITH(Hydrogen.set_group_number(0), "Group number must be between 1 and 18!");
}

TEST_CASE("Group number above upper limit.")
{
    Element Hydrogen("Hydrogen", "H", 1, 1.008, 1, 1);
    REQUIRE_THROWS_WITH(Hydrogen.set_group_number(19), "Group number must be between 1 and 18!");
}

TEST_CASE("Period number below lower limit.")
{
    Element Hydrogen("Hydrogen", "H", 1, 1.008, 1, 1);
    REQUIRE_THROWS_WITH(Hydrogen.set_period_number(-2), "Period number must be between 1 and 7!");
}

TEST_CASE("Period number above upper limit.")
{
    Element Hydrogen("Hydrogen", "H", 1, 1.008, 1, 1);
    REQUIRE_THROWS_WITH(Hydrogen.set_period_number(8), "Period number must be between 1 and 7!");
}