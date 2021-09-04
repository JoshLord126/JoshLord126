#include <iostream>

using namespace std;
	
	int a, b, c, d;
	string e, f, g;
	
void pro1(){
	cout<<"Suma - Resta - Multiplicación - Divición\n";
	cout<<"Ingresa un numero: ";
	cin>>a;
	cout<<"Ingresa un numero: ";
	cin>>b;
	
	cout<<"\n\nSuma: "<<a+b;
	cout<<"\nResta: "<<a-b;
	cout<<"\nMultiplicación: "<<a*b;
	cout<<"\nDivición: "<<a/b;
};

int pro2(){
	cout<<"¿Par o Impar?\n";
	cout<<"Ingresa un numero: ";
	cin>>a;
	if(a%2==0){
		cout<<"\n\nEl numero es par";
	}else{
		cout<<"\n\nEl numero es impar";
	}
};

int pro3(){
	cout<<"Hola";
};

int pro4(){
	cout<<"Palindromo?\n";
	cout<<"Ingresa un numero: ";
	cin>>e;
	a = e.length();
	b = a;
	c = 0;
	for(int i = 0; i <a; i++){
		if(e.substr(i,1) == e.substr(b-1,1)){
			c++;
		};
		b--;
	};
	if(c==a){
		cout<<"\n\nEs palindromo";
	}else{
		cout<<"\n\nNo es palindromo";
	}
};

int pro5(){
	cout<<"Hola";
};

int pro6(){
	string uni[10], diez[6], dec[10];
	uni[0] = "cero";
	uni[1] = "uno";
	uni[2] = "dos";
	uni[3] = "tres";
	uni[4] = "cuatro";
	uni[5] = "cinco";
	uni[6] = "seis";
	uni[7] = "siete";
	uni[8] = "ocho";
	uni[9] = "nueve";
	diez[0] = "diez";
	diez[1] = "once";
	diez[2] = "doce";
	diez[3] = "trece";
	diez[4] = "catorce";
	diez[5] = "quince";
	dec[2] = "veinte";
	dec[3] = "treinta";
	dec[4] = "cuarenta";
	dec[5] = "cincuenta";
	dec[6] = "sesenta";
	dec[7] = "setenta";
	dec[8] = "ochenta";
	dec[9] = "noventa";
	dec[1] = "diez";
	

	
	
	
	
	
	
	
	
	
	cout<<"Numero a letra\n";
	cout<<"Ingresa un numero: ";
	cin>>a;
	b = a/100;
	c = (a/10)%10;
	d = a%10;
	
	if(b==0 && c==0){
		e = uni[d];
	}
	
	if(c==1 && d>=1 && d<=5){
		e = diez[d];
	};
	
	if(c==1 && d>5){
		e = "diez y "+uni[d];
	}
	
	if(c==2 && d>0){
		e = "veinti"+uni[d];
	}
	
	if(c>0 && d==0){
		e = dec[c];
	}else if(c>0 && c!=1 && d>0){
		e = dec[c] + " y " + uni[d];
	};
	
	f = "";
	if(a==100){
		e = "cien";
	}else if(c==1){
		f = "ciento ";
	};
	
	if(b>1 && c==0 && d==0){
		f = uni[b] + "cientos ";
		e = "";
	}else if(b>1 && c>0 && d>0){
		f = uni[b] + "cientos ";
	}
	
	
	
	
	
	cout<<f<<e;
};

int pro7(){
	cout<<"Hola";
};

int pro8(){
	cout<<"Hola";
};

int pro9(){
	cout<<"Hola";
};

int pro10(){
	cout<<"Hola";
};

int pro11(){
	cout<<"Hola";
};

int pro12(){
	cout<<"Hola";
};

int pro13(){
	cout<<"Hola";
};

int pro14(){
	cout<<"Hola";
};

int pro15(){
	cout<<"Hola";
};

int pro16(){
	cout<<"Hola";
};

int pro17(){
	cout<<"Hola";
};
int pro18(){
	cout<<"Hola";
};

int pro19(){
	cout<<"Hola";
};

int pro20(){
	cout<<"Hola";
};

int main(){
	pro6();
	return 0;
};
