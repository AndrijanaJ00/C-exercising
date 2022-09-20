#include "Kafe.h"

int main()
{
    Proizvod p;
    Kafe k;

    p.setImeProizvoda("Proizvod1");
    p.setCenaProizvoda(100);
    p.setRokTrajanja("10/2/2022");

    k.setImeProizvoda("Kafa1");
    k.setCenaProizvoda(130);
    k.setRokTrajanja("11/3/2021");
    k.setTip("u zrnu");

    p.info();
    k.info();

    return 0;
}