#include <iostream>

using namespace std;

void EnterDates();
void FindFunction(char [10], int);

void EnterDates(){

    char palabra[10];
    
    cout<<"Cuantas letras tiene su palabra?"<<endl;
    int y; cin>>y;
    
    for(int i=0; i<y; i++){

        cout<<"\n=";
        cin>>palabra[i];
    }
    FindFunction(palabra, y);

}

void FindFunction(char palabra[10],int y){

    char resultado;
    int vida = 25;
    int salida = 0;
    
    for(int i=0; i < y+10; i++){

        while(vida <= 0){
            cout<<"I'm sorry LOSER"<<endl;
            exit(-1);

        }
        while(salida == y){
            cout<<"Very good"<<endl;
            exit(-1);

        }
        cout<<"\nEnter letter = ";
        cin>>resultado;

        for(int j=0; j<=y; j++){

            if(resultado == palabra[j]){  

                cout<<"OKey"<<endl;
                salida = salida + 1;
                break;

            }else{
                    vida = vida - 1;
                }                
            }
        
        continue;
    }
    
}

int main(){
    EnterDates();
    return 0;
}