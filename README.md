# Super Trunfo de Cidades

Este é um projeto em C que implementa um jogo de comparação de cartas baseado no Super Trunfo, focado em cidades brasileiras.

## Funcionalidades

- Comparação automática entre duas cartas pré-definidas (São Paulo e Rio de Janeiro)
- Sistema de comparação baseado em atributos específicos
- Exibição completa das informações das cartas
- Lógica de vitória baseada no atributo escolhido
- Suporte a múltiplos atributos de comparação

## Estrutura das Cartas

Cada carta contém as seguintes informações:
- **Estado**: Nome do estado (string)
- **Código da Carta**: Código único (ex: SP01, RJ01)
- **Nome da Cidade**: Nome da cidade (string)
- **População**: Número de habitantes (int)
- **Área**: Área em km² (float)
- **PIB**: Produto Interno Bruto em R$ (float)
- **PIB per capita**: PIB dividido pela população (float)
- **Densidade Demográfica**: Habitantes por km² (float)
- **Número de Pontos Turísticos**: Quantidade de pontos (int)
- **Pontos Turísticos**: Lista completa dos pontos turísticos (array de strings)

## Cartas Disponíveis

### São Paulo (SP01)
- População: 44.539.225 habitantes
- Área: 248.600,0 km²
- PIB: R$ 3.500.000.000.000
- PIB per capita: R$ 78.600
- Densidade demográfica: 179,1 hab/km²
- 10 pontos turísticos incluindo Avenida Paulista, MASP, Parque do Ibirapuera, etc.

### Rio de Janeiro (RJ01)
- População: 17.219.679 habitantes
- Área: 43.696,0 km²
- PIB: R$ 1.150.000.000.000
- PIB per capita: R$ 67.100
- Densidade demográfica: 394,2 hab/km²
- 10 pontos turísticos incluindo Cristo Redentor, Pão de Açúcar, Maracanã, etc.

## Sistema de Comparação

O programa compara as cartas baseado em um atributo específico escolhido no código:

### Atributos Disponíveis:
- **População**: Maior população vence
- **Área**: Maior área vence
- **PIB**: Maior PIB vence
- **PIB per capita**: Maior PIB per capita vence
- **Densidade Demográfica**: Menor densidade vence (atributo especial)

### Configuração do Atributo
Para alterar o atributo de comparação, edite a variável `atributo_escolhido` no código:
```c
char atributo_escolhido[] = "PIB_per_capita"; // Atributo atual
```

## Como Compilar e Executar

```bash
# Compilar o programa
gcc -o super_trunfo super_trunfo.c

# Executar o programa
./super_trunfo
```

## Exemplo de Saída

```
=== SUPER TRUNFO DE CIDADES ===

=== CARTAS PRÉ-DEFINIDAS ===

Carta 1 - São Paulo:
Estado: São Paulo
Código: SP01
Nome da Cidade: São Paulo
População: 44539225 habitantes
Área: 248600.0 km²
PIB: R$ 3499999887360
PIB per capita: R$ 78600
Densidade demográfica: 179.1 hab/km²
Número de Pontos Turísticos: 10
Pontos Turísticos:
  - Avenida Paulista
  - Parque do Ibirapuera
  - Museu de Arte de São Paulo (MASP)
  ...

=== COMPARAÇÃO DAS CARTAS ===

Atributo escolhido para comparação: PIB_per_capita

Comparando PIB per capita:
São Paulo: R$ 78600
Rio de Janeiro: R$ 67100

🏆 VENCEDOR: São Paulo!
São Paulo tem maior PIB per capita (R$ 78600 vs R$ 67100)
```

## Desenvolvimento

Este projeto implementa as funcionalidades básicas do Super Trunfo:
- **Dados pré-definidos**: As cartas são carregadas automaticamente no código
- **Comparação automática**: O atributo de comparação é escolhido no código
- **Lógica de vitória**: Implementa as regras específicas para cada atributo
- **Interface clara**: Saída formatada e fácil de entender

### Características Técnicas
- Linguagem: C
- Estruturas de dados: Arrays e strings
- Lógica condicional: if/else para comparações
- Formatação: printf com especificadores de formato
