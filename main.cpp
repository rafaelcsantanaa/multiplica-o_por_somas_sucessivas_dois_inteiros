///calcule a multiplicação por somas sucessivas de dois inteiros.

#include <iostream>
#include <math.h>
using namespace std;
int main(){
int num1, num2, a, b,mult, soma = 0, i = 0;
cout<<"MultiplicacAo por somas sucessivas"<<endl;
cout<<"Digite o primeiro numero: "<<endl;
cin>>a;
cout<<"Digite o segundo numero: "<<endl;
cin>>b;
if(a < b){
num1 = b;
num2 = a;
}
else{
num1 = b;
num2 = a;
}
cout <<"\n\tSoma: ";
while (i!= num1){
soma = soma + num2;
cout<<"+"<<num2;
i = i + 1;
}
mult=a*b;
cout<<"="<<soma;
cout<<"\n\n\tMultiplicacao: "<<a<<"*"<<b<<"="<<mult;
}

