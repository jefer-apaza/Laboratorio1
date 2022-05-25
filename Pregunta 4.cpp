#include <iostream>

using namespace std;

int fibonacci (int x)
{

    if (x==0)
    {

        return 0;


    }
    if (x==1)
    {

        return 1;

    }
    else
    {

        return(fibonacci(x-2)+fibonacci(x-1));

    }
}

int main()
{

    int x=1;

    while ( x != 0 )
    {

        int n;
        int b[n];
        cout <<"\nel largo de la serie fibonacci: ";
        cin >>n;
        if (n < 0)
        {

            cout << "\nEl valor introducido es negativo no se puede hacer una serie Fibonacci";

            x=1;

        }
        else
        {

           cout<<"\ninserte los valores para la serie fibonacci de "<< n <<" terminos";
            for (int i = 1; i <= n; i++)
                b[i] = fibonacci(i);

        }

        cout<< "\n\nPara continuar el programa inserte un valor distinto de 0: ";
        cin >> x;

    }


}
