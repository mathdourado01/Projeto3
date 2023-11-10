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
#endif // LAB_H



