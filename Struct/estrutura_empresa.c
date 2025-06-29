#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct sDadosEmpresariais {
    int codSetor;
    char cargo[30];
    float salario;
};

struct sDadosPessoais {
    char nome[50];
    int idade;
    char sexo; // 'M' ou 'F'
    char cpf[15]; // Formato: xxx.xxx.xxx-xx
    char dtNasc[11]; // Formato: dd/mm/aaaa
    struct sDadosEmpresariais dadosEmp;
};

int validarFormatoCargo(const char *cargo) {
    return (strlen(cargo) > 30) ? -1 : 1;
}

int validarFormatoCPF(const char *cpf) {
    if (strlen(cpf) != 14) return -1;
    if (cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-') return -1;
    
    for (int i = 0; i < 14; i++) {
        if (i == 3 || i == 7 || i == 11) continue;
        if (!isdigit(cpf[i])) return -1;
    }
    return 1;
}

int validarFormatoData(const char *dt) {
    if (strlen(dt) != 10) return -1;
    if (dt[2] != '/' || dt[5] != '/') return -1;
    
    for (int i = 0; i < 10; i++) {
        if (i == 2 || i == 5) continue;
        if (!isdigit(dt[i])) return -1;
    }
    return 1;
}

int validaCodSetor(int cod) {
    return (cod < 0 || cod > 99) ? -1 : 1;
}

int validaIdade(int idade) {
    return (idade < 0 || idade > 120) ? -1 : 1;
}

int main() {
    struct sDadosPessoais funcionario;
    int check;

    // Nome
    printf("\nEscreva seu nome: ");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';

    // Idade
    do {
        printf("Informe sua idade: ");
        scanf("%d", &funcionario.idade);
        while (getchar() != '\n');
        
        check = validaIdade(funcionario.idade);
        if (check == -1) printf("\nIdade invalida! Tente novamente\n");
    } while (check != 1);

    // Sexo
    do {
        printf("Sexo (M/F): ");
        scanf(" %c", &funcionario.sexo);
        while (getchar() != '\n');
        
        funcionario.sexo = toupper(funcionario.sexo);
        if (funcionario.sexo != 'M' && funcionario.sexo != 'F') {
            printf("\nOpcao invalida! Use M ou F\n");
        }
    } while (funcionario.sexo != 'M' && funcionario.sexo != 'F');

    // CPF
    do {
        printf("Informe seu CPF (xxx.xxx.xxx-xx): ");
        scanf("%14s", funcionario.cpf);
        while (getchar() != '\n');
        
        check = validarFormatoCPF(funcionario.cpf);
        if (check == -1) printf("\nCPF invalido! Formato correto: xxx.xxx.xxx-xx\n");
    } while (check != 1);

    // Data de Nascimento
    do {
        printf("Informe sua data de nascimento (dd/mm/aaaa): ");
        scanf("%10s", funcionario.dtNasc);
        while (getchar() != '\n');
        
        check = validarFormatoData(funcionario.dtNasc);
        if (check == -1) printf("\nData invalida! Formato correto: dd/mm/aaaa\n");
    } while (check != 1);

    // Código do Setor
    do {
        printf("Informe o codigo do setor (0-99): ");
        scanf("%d", &funcionario.dadosEmp.codSetor);
        while (getchar() != '\n');
        
        check = validaCodSetor(funcionario.dadosEmp.codSetor);
        if (check == -1) printf("\nCodigo invalido! Deve ser entre 0 e 99\n");
    } while (check != 1);

    // Cargo
    do {
        printf("Informe o cargo (max 30 caracteres): ");
        fgets(funcionario.dadosEmp.cargo, sizeof(funcionario.dadosEmp.cargo), stdin);
        funcionario.dadosEmp.cargo[strcspn(funcionario.dadosEmp.cargo, "\n")] = '\0';
        
        check = validarFormatoCargo(funcionario.dadosEmp.cargo);
        if (check == -1) printf("\nCargo muito longo! Maximo 30 caracteres\n");
    } while (check != 1);

    // Salário
    do {
        printf("Digite o salario (maior que 0): ");
        scanf("%f", &funcionario.dadosEmp.salario);
        while (getchar() != '\n');
        
        if (funcionario.dadosEmp.salario <= 0) {
            printf("\nSalario deve ser maior que 0\n");
        }
    } while (funcionario.dadosEmp.salario <= 0);

    // Exibição dos dados
    printf("\n--- DADOS DO FUNCIONARIO ---\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %s\n", (funcionario.sexo == 'M') ? "Masculino" : "Feminino");
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %s\n", funcionario.dtNasc);
    printf("Codigo do Setor: %d\n", funcionario.dadosEmp.codSetor);
    printf("Cargo: %s\n", funcionario.dadosEmp.cargo);
    printf("Salario: R$ %.2f\n", funcionario.dadosEmp.salario);

    return 0;
}