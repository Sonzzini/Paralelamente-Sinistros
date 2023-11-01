# Problema de soma dos trapézios com f(x) = x^2

### Utilizando uma thread, com máquina EC2 t2 micro:
##### Tempo médio de execução: 0,000034 segundos
![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/eceb8ac9-dec8-45af-a626-d0b43046b025)

## Paralelizado
### Utilizando 4 threads, com máquina EC2 t2 micro:
##### Tempo médio de execução: 0,000523 segundos
##### Speedup: ≈0,065
![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/d321ddaf-8ad1-46f0-847f-38d379113a0d)
### Utilizando 4 threads, com máquina EC2 t3 medium:
##### Tempo médio de execução: 0,000232 segundos
##### Speedup: ≈0,147
![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/954428e4-64f9-410e-a8c7-e34ce592f017)

---

# Problema de multiplicação de matrizes
### Utilizando uma thread, com máquina EC2 t2 micro:
##### Tempo médio de execução: 13,805627 segundos
![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/a139e18d-af7e-4f27-b8d8-da68d591938c)

## Paralelizado
### Utilizando 2 threads, com máquina EC2 t2 micro:
##### Tempo médio de execução: 14,943320 segundos
##### Speedup: ≈0,923
![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/31b11473-86f5-42d9-b676-b3b6d6840794)

### Utilizando 2 threads, com máquina EC2 t3 medium:
##### Tempo médio de execução: 26,7578085 segundos
##### Speedup: ≈0,515
![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/0e39ef5e-0ba1-4272-abe9-ea24f8109f46)

### Utilizando 10 threads, com máquina EC2 t3 medium:
##### Tempo médio de execução: 26,385011 segundos
##### Speedup: ≈0,523
![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/1e83cf20-54ec-4e2f-b586-e871a19349b8)

---

Foi interessante perceber o aumento de tempo médio de execução decorrente da utilização de mais threads, já que esse, normalmente, não é o esperado. Porém, é possível deduzir que o motivo por causa desse fenômeno possa ser:
1. Overhead de criação de threads
2. Concorrência excessiva
3. Paralelismo limitado
4. Sobrecarga do sistema
5. Tamanho do problema
Para o caso da instância EC2 t2 micro, por ela utilizar apenas 1 vCPU (virtual CPU), pode haver restrições significativas de recursos, o que pode resultar em um desempenho inferior para tarefas paralelas. O baixo desempenho da CPU pode limitar o número de threads eficazes que podem ser executadas.
O tipo de instância EC2 t3 medium tem mais recursos do que o t2.micro, mas ainda é uma instância de tamanho médio e pode ter limitações para cargas de trabalho paralelas intensivas.
