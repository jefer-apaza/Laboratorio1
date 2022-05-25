#include<iostream>

using namespace std;
int main(){
   int sudo[9][9];
   bool resultado=true;

   for(int i = 0 ;i<9;i++)
   {
     for(int j = 0 ;j<9;j++){
        cin>>sudo[i][j];
     }
   }

   for(int i = 0 ;i<9;i++)
   {
       int sumaA = 0;
     for(int j = 0 ;j<9;j++){
            sumaA += sudoku[i][j];
     }
     if(suma !=45){
        resultado=false;
        break;
     }
   }

   for(int i = 0 ;i<9;i++)
   {
       int sumaB = 0;
     for(int j = 0 ;j<9;j++){
            sumaB += sudoku[j][i];
     }
     if(sumaB !=45){
        resultado=false;
        break;
     }
   }
   if(resultado){
    cout<<"es valido la solucion"<<endl;
   }
   else{
     cout<<"No es valido la solucion"<<endl;
   }
    return 0;
}
