#include <iostream>
#include <stdlib.h>
using namespace std;

float deposito(float sal){
	
	int opc_dep=0;
	float x=0, depositar=0, saldo_dep=sal;
	
	while (x==0){
		
		system ("cls");
		
		cout << "Quanto dinheiro, em reais, voce quer depositar?";
		cout << "\nSe depositar centavos, use PONTO, nao use VIRGULA";
		cout << "\n\nSaldo atual: " << saldo_dep << "     R$";
		cin >> depositar;
		
		saldo_dep += depositar;
		
		system ("cls");
			
		cout << "Deposito realizado, seu saldo agora e de R$" << saldo_dep << "\n\n";
		
		cout << "1-Novo Deposito";
		cout << "\n2-Outra Acao    ";
		cin >> opc_dep;
			
		switch (opc_dep){
			case 1:
				x=0;
				break;
			case 2:
				x++;
				break;
			default:
				cout << "Opcao Invalida!\n\n\n";
				break;
		}
	}
	return saldo_dep;
}





float saque (float sal){
	
	int opc_saque=0;
	float x=0, sacar=0, saldo_saque=sal;
	
	while (x == 0){
		
		system ("cls");
		
		cout << "Quanto dinheiro, em R$, deseja sacar?";
		cout << "\nSe sacar centavos, use PONTO, nao use VIRGULA";
		cout << "\n\nSaldo atual: " << saldo_saque << "     R$";
		cin >> sacar;
		
		saldo_saque -= sacar;
		
		system ("cls");
		
		cout << "Saque realizado, seu saldo agora e de R$" << saldo_saque << "\n\n";
		
		cout << "1-Novo Saque";
		cout << "\n2-Outra Acao    ";
		cin >> opc_saque;
		
		switch (opc_saque){
			case 1:
				x = 0;
				break;
			case 2:
				x = 1;
				break;
		}
	}
	return saldo_saque;
}





float saldo(float sal){
	
	int opc_saldo=0;
	float x=0, saldo=sal;
	
	while (x==0){
	
		system ("cls");
		
		cout << "Seu saldo e de R$" << saldo;
		cout << "\n\n1-Voltar";
		cin >> opc_saldo;
		
		if (opc_saldo == 1){
			x = 1;
		}
	}
	return saldo;
}





int main (){
	
	
	float dep=0, saq=0, sal=0;
	int opc=0;
	
	while (opc != 4){
		
		system ("cls");
		
		cout << "1-Depositar Dinheiro";
		cout << "\n2-Sacar Dinheiro";
		cout << "\n3-Visualizar Saldo";
		cout << "\n4-Sair    ";
		cin >> opc;
		
		switch (opc){
			case 1:
				dep = deposito(sal);
				sal = dep;
				break;
			case 2:
				saq = saque(sal);
				sal = saq;
				break;
			case 3:
				saldo(sal);
				break;
			case 4:
				break;
			default:
				cout << "Opcao invalida!\n\n\n";
		}
	}
	
	return 0;
}
