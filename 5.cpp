/*5. En una Granja existen N conejos, N1 blancos y N2 negros. Se venden X negros y Y blancos.
Hacer un código que: 
a) Imprima la cantidad de conejos vendida
b) Si P1 es el precio de venta de los conejos blancos y P2 es el precio de venta de los conejos negros, imprima el monto total de la venta. 
c) Imprima el color de los conejos que se vendieron más. */

#include<iostream>

using namespace std;

int main(){
	
int n1, n2, p1, p2, y, x,catv,m1,m2, mtv;

 cout<<"Digite cantidad de conejos blancos:"<<endl;
 cin>>n1;
 
 cout<<"Digite precio de venta conejos blancos:"<<endl;
 cin>>p1;

 cout<<"Conejos blancos vendidos:"<<endl;
 cin>>y;
 
 cout<<"Digite cantidad de conejos negros:"<<endl;
 cin>>n2;

 cout<<"Digite precio de venta conejos negros:"<<endl;
 cin>>p2;

 cout<<"Conejos negros vendidos:"<<endl;
 cin>>x;

  catv = x + y;

 cout<<"Cantidad de conejos vendidos:"<<catv<<endl;
  m1 = p1 * y;
  
  m2 = p2 * x;
  
  mtv = m1 + m2;
  
  cout<<"Monto total de la venta: "<<mtv<<endl;
  if(x>y){
  	
  cout<<"Los conejos mas vendidos son los negros."<<endl;
  
  }else{
  	
   cout<<"Los conejos mas vendidos son los blancos."<<endl;
   
  }
  return 0;
}
