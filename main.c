#include <stdio.h>
#include "lab.h"

int main() {
    FILE *arquivo;
    arquivo = fopen("tarefas.dat", "ab+");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo de tarefas");
        return 1;
    }

    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Deletar Tarefa\n");
        printf("4. Alterar Tarefa\n");
        printf("5. Filtrar por Prioridade\n");
        printf("6. Filtrar por Estado\n");
        printf("7. Filtrar por Categoria\n");
        printf("8. Filtrar por Prioridade e Categoria\n");
        printf("9. Exportar por Prioridade\n");
        printf("10. Exportar por Categoria\n");
        printf("11. Exportar por Prioridade e Categoria\n");
        printf("12. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarTarefa(arquivo);
                break;
            case 2:
                listarTarefas(arquivo);
                break;
            case 3:
                deletarTarefa(arquivo);
                break;
            case 4:
                alterarTarefa(arquivo);
                break;
            case 5:
                filtrarPorPrioridade(arquivo);
                break;
            case 6:
                filtrarPorEstado(arquivo);
                break;
            case 7:
                filtrarPorCategoria(arquivo);
                break;
            case 8:
                filtrarPorPrioridadeECategoria(arquivo);
                break;
            case 9:
                exportarPorPrioridade(arquivo);
                break;
            case 10:
                exportarPorCategoria(arquivo);
                break;
            case 11:
                exportarPorPrioridadeECategoria(arquivo);
                break;
            case 12:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 12);

    fclose(arquivo);

    return 0;
}
