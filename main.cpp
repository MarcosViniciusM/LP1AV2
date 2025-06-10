#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

int main() {
	
	int escolha, escolha2, run = 1;
	
	string n2;
	int i2, q2, h2;
	float s2, b2;
	
	Funcionario* matriz[10];
	int tamanhoMatriz=0;
	//Funcionario** matriz = new Funcionario*[10];
	
	do{
		
		cout << "1 - Criar Funcionario" << endl;
		cout << "2 - Ler Funcionarios" << endl;
		cout << "3 - Parar o programa" << endl;
		
		escolha = 0;
		cin >> escolha;
		switch(escolha){
			case 1:
				cout << "Nome: " << endl;
				cin >> n2;
	
				cout << "Salario base: " << endl;
				cin >> s2;
	
				cout << "ID: " << endl;
				cin >> i2;
				
				cout << "1 - Desenvolvedor" << endl;
				cout << "2 - Gerente" << endl;
				cout << "3 - Estagiario" << endl;
				cin >> escolha2;
				switch(escolha2){
					case 1:
						cout << "Quantidade de projetos: " << endl;
						cin >> q2;
						matriz[tamanhoMatriz] = new Desenvolvedor(n2, s2, i2, q2);
						tamanhoMatriz++;
						break;
					case 2:
						cout << "Bonus: " << endl;
						cin >> b2;
						matriz[tamanhoMatriz] = new Gerente(n2, s2, i2, b2);
						tamanhoMatriz++;
						break;
					case 3:
						cout << "Horas trabalhadas: " << endl;
						cin >> h2;
						matriz[tamanhoMatriz] = new Estagiario(n2, s2, i2, h2);
						tamanhoMatriz++;
						break;
				}
				break;
			
			case 2:
				if(tamanhoMatriz<5){
					cout << "Necessario mais de 6 funcionarios!" << endl;
					break;
				};
				for(int i=0;i<tamanhoMatriz;i++){
					matriz[i]->exibirInformacoes();
				};
			break;
			case 3:
				if(tamanhoMatriz<5){
					cout << "Necessario mais de 6 funcionarios!" << endl;
					break;
				};
			run = 0;
			break;
			case 27:
			matriz[0] = new Desenvolvedor("Jackson", 200, 101, 5);
			matriz[1] = new Gerente("Maxwell", 5000, 102, 2000);
			matriz[2] = new Desenvolvedor("Khadija", 100, 103, 8);
			matriz[3] = new Desenvolvedor("Zurich", 300, 104, 1);
			matriz[4] = new Gerente("Sarah", 20000, 105, 50000);
			matriz[5] = new Estagiario("Sam", 50, 106, 320);
			tamanhoMatriz=5;
			for(int i=0;i<tamanhoMatriz;i++){
				matriz[i]->exibirInformacoes();
			};
			
			run = 0;
			break;
		}
	} while ( run == 1);
	
	for(int i=0;i<tamanhoMatriz;i++){
		delete matriz[i];
	};
	
    return 0;
}