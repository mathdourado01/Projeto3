//
// Created by unifmvalle on 22/09/2023.
//
#ifndef LAB_H
#define LAB_H
#include <stdio.h>
// Definindo a estrutura Tarefa para representar informações sobre tarefas
enum Estado {
    NAO_INICIADO,
    EM_ANDAMENTO,
    COMPLETO
};

// Estrutura para armazenar os valores da tarefa
struct Tarefa {
    int prioridade;
    char descricao[300];
    char categoria[100];
    enum Estado estado;  // Adicionando a variável de estado
};
struct Tarefa {
    int prioridade;
    char descricao[300];
    char categoria[100];
};

//Função para calcular o comprimento de uma string
size_t meu_strlen(const char *str);

// Função para comparar duas strings e determinar a relação entre elas.
int meu_strcmp(const char *s1, const char *s2);

//Função para remover quebras de linha de uma string
void removerQuebraLinha(char *str);

//Função para cadastrar uma tarefa em um arquivo
void cadastrarTarefa(FILE *arquivo);

//Função para listar tarefas armazenadas em um arquivo
void listarTarefas(FILE *arquivo);

//Função para deletar uma tarefa de um arquivo
void deletarTarefa(FILE *arquivo);

// Definindo uma função que retorna o nome de um estado com base no valor enum Estado
const char *getNomeEstado(enum Estado estado);

//Função para alterar uma tarefa de um arquivo
void alterarTarefa(FILE *arquivo);

// Função para filtrar tarefas por prioridade e exibir apenas as tarefas que correspondem à prioridade especificada
void filtrarPorPrioridade(FILE *arquivo);

// Função para filtrar tarefas por estado e exibir apenas as tarefas que correspondem ao estado especificado
void filtrarPorEstado(FILE *arquivo);

// Função para filtrar tarefas por categoria e exibir apenas as tarefas que correspondem à categoria especificada
void filtrarPorCategoria(FILE *arquivo);

// Função para filtrar tarefas por prioridade e categoria e exibir apenas as tarefas que correspondem a ambos os critérios
void filtrarPorPrioridadeECategoria(FILE *arquivo);

// Função para exportar tarefas por prioridade e salvar em um arquivo externo
void exportarPorPrioridade(FILE *arquivo);

// Função para exportar tarefas por categoria e salvar em um arquivo externo
void exportarPorCategoria(FILE *arquivo);

// Função para exportar tarefas por prioridade e categoria e salvar em um arquivo externo
void exportarPorPrioridadeECategoria(FILE *arquivo);

#endif // LAB_H



