// Autor: Raul Martinez
// Feb 20, 2023
// ramanez@gmail.com
#include <iostream>
#include <cmath>


using namespace std;


int main() {


    while(true){
        int opt;
        cout<<"Bienvenido a la calculadora epica RaloCalculator!!!\n"
              "\n"
              "Que operacion deseas realizar? \n"
              "\n"
              "Ingresa una opcion\n "
              "1) Realizar una suma\n "
              "2) Realizar una diferencia \n "
              "3) Realizar una division \n "
              "4) Realizar el modulo (Residuo de la division)\n "
              "5) Realizar una multiplicacion\n "
              "6) Realizar una raiz cuadrada\n "
              "7) Realizar una potencia\n "
              "8) Calcular el numero de una posicion en la serie de Fibonacci y la razon aurea\n "
              "9) Salir\n "
            <<endl;

        cin >> opt; //leer desde teclado
        int num1, num2 ;

        if(opt==9){

            cout<<"Hasta la proxima :) " << endl;
            break;
        }


        if(opt==1){
            cout <<"Ingresa dos numeros enteros"<< endl;
            cin >> num1 >> num2;
            cout << "La suma de "<< num1<< " + "<< num2 << " es = " << num1 + num2 << endl;
        }

        if (opt==2){
            cout <<"Ingresa dos numeros enteros"<< endl;
            cin >> num1 >> num2;

            cout << "La resta de "<< num1<< " - "<< num2 << " es = " << num1 - num2 << endl;
        }

        if (opt==3){
            if(num2 != 0){
                cout <<"Ingresa dos numeros enteros"<< endl;
                cin >> num1 >> num2;

                cout << "La division de "<< num1<< " / "<< num2 << " es = " << float(num1) / float(num2) << endl;
            }

            else cout<< "El resultado es indeterminado, por favor elige un numero diferente de cero" << endl;

        }

        if (opt==4){
            cout <<"Ingresa dos numeros enteros"<< endl;
            cin >> num1 >> num2;

            cout << "El modulo de "<< num1<< " % "<< num2 << " es = " << num1 % num2 << endl;

        }
        if (opt==5){
            cout <<"Ingresa dos numeros enteros"<< endl;
            cin >> num1 >> num2;

            cout << "La multiplicacion  de "<< num1<< " * "<< num2 << " es = " << num1 * num2 << endl;

        }
        if (opt==6) {
            cout << "Ingresa un numero entero" << endl;
            cin >> num1;

            if (num1 >= 0) {


                cout << "La raiz cuadrada  de " << num1 << " es = " << sqrt(num1) << endl;

            }
            else
                cout << "Esta calculadora no puede calcular raices negativas, por favor elige un numero positivo"
                     << endl;
        }
        if(opt==7){
            cout <<"Ingresa dos numeros enteros"<< endl;
            cin >> num1 >> num2;

            cout<< "El numero "<< num1<< " eleveado a "<< num2<< " es = " <<pow(num1,num2)<< endl;
        }
        if(opt==8){
            cout <<"Ingresa hasta que posicion deseas calcular la serie de fibonacci (Elige un numero entero y mayor a 2)" << endl;
            cin >> num1;



            unsigned int F[num1]; //Declarar un arreglo de n posiciones sin signo para poder usar más terminas y no qutar negativos
            F[0] = 0; //Iniciar el arreglo desde los casos base
            F[1] = 1;

            int i = 2;



            while (i <= num1) {

                F[i] = F[i - 1] + F[i - 2];

                cout << "La serie de fibonacci con i = " << i << " es " << F[i] << endl;




                cout << "La razon aurea con i = " << i << " es " << float (F[i]) / float (F[i - 1]) << endl;

                i++;

            }

        }



    }


}