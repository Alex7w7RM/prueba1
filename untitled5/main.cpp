#include <iostream>
using namespace std;

int main() {
    int q,total, s,a,z,x, divi=1, resi=0, num,n;

    //ejercicio 1
    cout << "ingrese un numero para calcular el factorial" << endl;
    cin>> q;
    total =1;
    for (int i = 1; i <=q ; i++) {
        total = total*i ;
    }

    cout<< "El factoria de "<< q << "es:"<< total << endl;

    //ejercicio 2
    cout<< "ingrese un numero"<< endl;
     s= 12;
    while ( s<=1 );
    cout<< "los "<< s<< " numeros figobocci son;"<< endl;

    a=1;
    z=1;

    for (int i = 2; i < s; i++) {
        cout<< z<< "";
        z=a+z;
        cout << "" << endl;
        a=z-a;
    }





// ejercicio 3
    cout<< "ingrese un numero para verificar si es primo"<< endl;
    cin >> x;

    do {if ( x % divi ==0){
            resi++;
        }
        divi++;}

             while (divi<= x);

    if (resi ==2){
        cout<< "el numero"  << x << "es primo.";
    } else {
        cout<< "el numero"  << x << "no primo.";
    }





//ejercicio 4
    printf( "\n   Introduzca un nucmero para verificar si es par o impar: ", 163 );
    scanf( "%d", & num );

    if ( num % 2 == 0 )
        printf( "\n   ES PAR" );
    else
        printf( "\n   ES IMPAR"  );

    cout<< ""<< endl;



//ejercicio 5
    cout<<"Ingresar el numero que desee multiplicar :"<<endl;

    cin>>n;
    cout <<"tabla de multiplicar del: " << n<< endl;

    for(int i=1;i<=10;i++){

        int multiplicacion = i * n;
        cout<<n <<" x "<< i <<"="<< multiplicacion <<endl;
}
}