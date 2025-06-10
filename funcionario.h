#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;
	float salarioBase;
private:
	int id;
public:
	Funcionario(string n, float s, int i);
    string getNome();
	void setNome(string n);
    float getSalarioBase();
    void setSalarioBase(float s);
	int getId();
	void setId(int i);
	
	virtual void exibirInformacoes();
	virtual float calcularSalarioFinal() = 0;
};

class Desenvolvedor : public Funcionario {
private:
	int quantidadeDeProjetos;

public:
	Desenvolvedor(string n, float s, int i, int q);
	float calcularSalarioFinal();
	void exibirInformacoes();
};

class Gerente : public Funcionario {
private:
	float bonusMensal;

public:
	Gerente(string n, float s, int i, float b);
	float calcularSalarioFinal();
	void exibirInformacoes();
};

class Estagiario : public Funcionario { 
private:
	int horasTrabalhadas;

public:
	Estagiario(string n, float s, int i, int h);
	float calcularSalarioFinal();
	void exibirInformacoes();
};