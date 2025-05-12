# ♟️ Simulador de Movimentos de Xadrez em C
📚 Implementação do Movimentos de Xadrez em C para disciplina de Introdução à Programação
## 📝 Descrição
Programa em C que simula os movimentos básicos das peças de xadrez (Torre, Bispo, Rainha e Cavalo) utilizando estruturas de repetição e recursividade.

## 👩‍💻 Autora
Eduarda - Estudante de Análise e Desenvolvimento de Sistemas

## ⚙️ Funcionalidades

### Nível Iniciante (loops básicos):
✅ Torre: 5 movimentos para direita (usando `for`)  
✅ Bispo: 5 movimentos na diagonal (usando `while`)  
✅ Rainha: 8 movimentos para esquerda (usando `do-while`)  
✅ Cavalo: Movimento em L (2 para baixo + 1 para esquerda)

### Nível Avançado (técnicas complexas):
♻️ Torre: Implementação recursiva  
🔄 Bispo: Loops aninhados  
♻️ Rainha: Implementação recursiva  
⚙️ Cavalo: Controle avançado de fluxo

## 1. Compilar o programa
gcc xadrez.c -o xadrez -Wall -Wextra

## 2. Executar (Linux/Mac)
./xadrez

## 3. Opções disponíveis:
###    [1] Modo Iniciante (loops básicos)
###    [2] Modo Avançado (recursão)
###    [3] Sair

### Windows (WSL/MinGW):
./xadrez.exe

## 🏗️ Estrutura do Código
```plaintext
xadrez.c
├── Menu Principal
├── Funções Iniciante
│   ├── Implementações com loops básicos
└── Funções Avançado
    ├── Soluções recursivas
    └── Estruturas de loop complexas.

