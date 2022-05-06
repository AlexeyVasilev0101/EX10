#include "human.h"

int main()
{
    Student Alexey("Vasilev", "Alexey", "Valeryevich", 20, true);
    Boss Pirogova("Pirogova", "Tatyana", "Grigoryevna", 58, 135);
    Alexey.print();
    cout << endl;
    Pirogova.print();
}