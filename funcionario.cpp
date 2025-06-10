#include <iostream>
#include <iomanip>
#include "funcionario.h"
using namespace std;


string Funcionario::getNome(){
	return nome;
}

void Funcionario::setNome(string n){
	nome = n;
}

float Funcionario::getSalarioBase(){
	return salarioBase;
}

void Funcionario::setSalarioBase(float s){
	salarioBase = s;
}

int Funcionario::getId(){
	return id;
}

void Funcionario::setId(int i){
	id = i;
}

Funcionario::Funcionario(string n, float s, int i){
	setNome(n);
	setSalarioBase(s);
	setId(i);
}

void Funcionario::exibirInformacoes(){
	cout << "ID: " << getId() << endl;
	cout << "Nome: " << getNome() << endl;
}

float Desenvolvedor::calcularSalarioFinal(){
	return salarioBase + (500 * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes(){
	cout << "ID: " << getId() << endl;
	cout << "Nome: " << getNome() << endl;
	cout << "Tipo: Desenvolvedor" << endl;
	cout << "Projetos: " << quantidadeDeProjetos << endl;
	cout << "Salario base: " << setprecision (2) << fixed << getSalarioBase() << endl;
	cout << "Salario final: " << setprecision (2) << fixed << calcularSalarioFinal() << "\n" << endl; 
}

Desenvolvedor::Desenvolvedor(string n, float s, int i, int q) : Funcionario (n, s, i){
	quantidadeDeProjetos = q;
}

float Gerente::calcularSalarioFinal(){
	return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes(){
	cout << "ID: " << getId() << endl;
	cout << "Nome: " << getNome() << endl;
	cout << "Tipo: Gerente" << endl;
	cout << "Bonus: " << setprecision (2) << fixed << bonusMensal << endl;
	cout << "Salario base: " << setprecision (2) << fixed << getSalarioBase() << endl;
	cout << "Salario final: " << setprecision (2) << fixed << calcularSalarioFinal() << "\n" << endl; 
}

Gerente::Gerente(string n, float s, int i, float b) : Funcionario (n, s, i){
	bonusMensal = b;
}

float Estagiario::calcularSalarioFinal(){
	return salarioBase * (horasTrabalhadas / 160.0);
}

void Estagiario::exibirInformacoes(){
	cout << "ID: " << getId() << endl;
	cout << "Nome: " << getNome() << endl;
	cout << "Tipo: Estagiario" << endl;
	cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
	cout << "Salario base: " << setprecision (2) << fixed << getSalarioBase() << endl;
	cout << "Salario final: " << setprecision (2) << fixed << calcularSalarioFinal() << "\n" << endl; 
}

Estagiario::Estagiario(string n, float s, int i, int h) : Funcionario (n, s, i){
	horasTrabalhadas = h;
}