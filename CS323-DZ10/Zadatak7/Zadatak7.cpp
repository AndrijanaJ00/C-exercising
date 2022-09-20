#include "FizickoLice.h"

int main()
{
    Lice l;
    FizickoLice fl;

    l.setIme("Lice1");
    l.setPrezime("Lice1");
    l.setAdresa("Adresa1");
    l.setBrojTelefona("061541542");

    fl.setIme("Lice2");
    fl.setPrezime("Lice2");
    fl.setAdresa("Adresa2");
    fl.setBrojTelefona("065541215");
    fl.setBrojLicneKarte("005641515");

    l.info();
    fl.info();

    return 0;
}