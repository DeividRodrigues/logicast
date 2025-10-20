# Super Trunfo de Países

Este é um projeto em C que implementa o sistema de cadastro de cartas para o jogo Super Trunfo de Países.

## Funcionalidades

- Cadastro de duas cartas com informações completas sobre cidades
- Entrada de dados via terminal
- Exibição formatada das informações das cartas

## Estrutura das Cartas

Cada carta contém as seguintes informações:
- **Estado**: Letra de 'A' a 'H' (char)
- **Código da Carta**: Letra do estado + número (ex: A01, B03)
- **Nome da Cidade**: Nome da cidade (string)
- **População**: Número de habitantes (int)
- **Área**: Área em km² (float)
- **PIB**: Produto Interno Bruto (float)
- **Pontos Turísticos**: Quantidade de pontos turísticos (int)

## Como Compilar e Executar

```bash
# Compilar o programa
gcc -o super_trunfo super_trunfo.c

# Executar o programa
./super_trunfo
```

## Exemplo de Uso

O programa irá solicitar as informações das duas cartas sequencialmente e depois exibir todas as informações de forma organizada.

## Desenvolvimento

Este projeto faz parte de um desafio de programação em C, focado nos fundamentos de entrada, processamento e saída de dados.
