#include <iostream>
using namespace std;
int seguro, x;
float sueldo, cantidad, antici1, antici2, funeral;
int main(void)
{
    cout << "Ingrese su sueldo: \n";
    cin >> sueldo;
    cout << "Ingrese la opcion de seguro que desea consultar: \n 1.Seguro de vida \n 2.Seguro por muerte\n 3.Seguro por invalidez \n 4.Gastos funerarios\n "; // Se le pregunta un valor al usuario para saber que operacion realizar
    cin >> seguro;

    switch (seguro)
    {
    case 1:
        if (sueldo >= 400 & sueldo <= 910)
        {
            cantidad = 10000;
        }
        else if (sueldo > 910 & sueldo <= 1255)
        {
            cantidad = 14000;
        }
        else if (sueldo > 1255 & sueldo <= 1630)
        {
            cantidad = 18000;
        }
        else if (sueldo > 1630)
        {
            cantidad = 22000;
        }

        cout << "El monto que le sera entregado sera de $" << cantidad << "\n";
        break;

    case 2:
        if (sueldo >= 400 & sueldo <= 910)
        {
            cantidad = 10000;
        }
        else if (sueldo > 910 & sueldo <= 1255)
        {
            cantidad = 14000;
        }
        else if (sueldo > 1255 & sueldo <= 1630)
        {
            cantidad = 18000;
        }
        else if (sueldo > 1630)
        {
            cantidad = 22000;
        }

        cout << "El monto que le sera entregado sera de $" << cantidad << "\n";
        break;
    case 3:
        if (sueldo >= 400 & sueldo <= 910)
        {
            cantidad = 10000;
        }
        else if (sueldo > 910 & sueldo <= 1255)
        {
            cantidad = 14000;
        }
        else if (sueldo > 1255 & sueldo <= 1630)
        {
            cantidad = 18000;
        }
        else if (sueldo > 1630)
        {
            cantidad = 22000;
        }
        antici1 = cantidad / 2;
        antici2 = (cantidad / 2) / 12;
        cout << "Se le entregara el 50% como anticipo inmediatamente, el cual seria de $" << antici1 << " y la otra mitad se le entregara en cuotas de $" << antici2 << " durante 12 meses \n";
        break;
    case 4:
        if (sueldo >= 400 & sueldo <= 910)
        {
            cantidad = 10000;
        }
        else if (sueldo > 910 & sueldo <= 1255)
        {
            cantidad = 14000;
        }
        else if (sueldo > 1255 & sueldo <= 1630)
        {
            cantidad = 18000;
        }
        else if (sueldo > 1630)
        {
            cantidad = 22000;
        }
        funeral = (cantidad / 100) * 15;
        if (funeral > 1750)
        {
            funeral = 1750;
        }
        cout << "Se le entregara un 15% para gastos funerales, que seria de $" << funeral << " ademas del monto asegurado \n";
        break;
    default: // Default se usa para cuando el usuario no ingresa una opcion valida
        cout << "Ingrese una opción valida \n";
        break;
    }
    cout << "Deseas hacer otra operacion?\n1.Si \n2.No "; // Se le pregunta al usuario si desea hacer otra operacion
    cin >> x;                                             // Se asigna su respuesta a la variable
    while (x == 1)                                        // Si es uno se mantendra repitiendose el codigo hasta que el usuario diga 0 y el codigo acabe
    {
        cout << "Ingrese su sueldo: \n";
        cin >> sueldo;
        cout << "Ingrese la opcion de seguro que desea consultar: \n 1.Seguro de vida \n 2.Seguro por muerte\n 3.Seguro por invalidez \n 4.Gastos funerarios\n "; // Se le pregunta un valor al usuario para saber que operacion realizar
        cin >> seguro;

        switch (seguro)
        {
        case 1:
            if (sueldo >= 400 & sueldo <= 910)
            {
                cantidad = 10000;
            }
            else if (sueldo > 910 & sueldo <= 1255)
            {
                cantidad = 14000;
            }
            else if (sueldo > 1255 & sueldo <= 1630)
            {
                cantidad = 18000;
            }
            else if (sueldo > 1630)
            {
                cantidad = 22000;
            }

            cout << "El monto que le sera entregado sera de $" << cantidad << "\n";
            break;

        case 2:
            if (sueldo >= 400 & sueldo <= 910)
            {
                cantidad = 10000;
            }
            else if (sueldo > 910 & sueldo <= 1255)
            {
                cantidad = 14000;
            }
            else if (sueldo > 1255 & sueldo <= 1630)
            {
                cantidad = 18000;
            }
            else if (sueldo > 1630)
            {
                cantidad = 22000;
            }

            cout << "El monto que le sera entregado sera de $" << cantidad << "\n";
            break;
        case 3:
            if (sueldo >= 400 & sueldo <= 910)
            {
                cantidad = 10000;
            }
            else if (sueldo > 910 & sueldo <= 1255)
            {
                cantidad = 14000;
            }
            else if (sueldo > 1255 & sueldo <= 1630)
            {
                cantidad = 18000;
            }
            else if (sueldo > 1630)
            {
                cantidad = 22000;
            }
            antici1 = cantidad / 2;
            antici2 = (cantidad / 2) / 12;
            cout << "Se le entregara el 50% como anticipo inmediatamente, el cual seria de $" << antici1 << " y la otra mitad se le entregara en cuotas de $" << antici2 << " durante 12 meses \n";
            break;
        case 4:
            if (sueldo >= 400 & sueldo <= 910)
            {
                cantidad = 10000;
            }
            else if (sueldo > 910 & sueldo <= 1255)
            {
                cantidad = 14000;
            }
            else if (sueldo > 1255 & sueldo <= 1630)
            {
                cantidad = 18000;
            }
            else if (sueldo > 1630)
            {
                cantidad = 22000;
            }
            funeral = (cantidad / 100) * 15;
            if (funeral > 1750)
            {
                funeral = 1750;
            }
            cout << "Se le entregara un 15% para gastos funerales, que seria de $" << funeral << " ademas del monto asegurado \n";
            break;
        default: // Default se usa para cuando el usuario no ingresa una opcion valida
            cout << "Ingrese una opción valida \n";
            break;
        }
        x = 0;
        cout << "Deseas hacer otra operacion?\n1.Si \n2.No ";
        cin >> x;
    }
    return 0;
}