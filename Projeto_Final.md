# Compilação do Programa "Paralelização da Série de Taylor para a Aproximação da Constante de Euler".
---
# Pré-requisitos:

Certifique-se de ter o GCC (GNU Compiler Collection) instalado no seu sistema.
Instale a biblioteca GMP (GNU Multiple Precision Arithmetic Library) e suas dependências.

#### Instalação da bilbioteca GMP
##### Debian/Ubuntu
```sudo apt-get install libgmp-dev```

##### Red Hat/Fedora
```sudo yum install gmp-devel```

##### macOS
```brew install gmp```


# Compilação:

Abra um terminal na raiz do projeto.

Execute o seguinte comando para compilar o programa:

```gcc projetoFinal.c -o run -fopenmp -lgmp -lm```

Certifique-se de ajustar os comandos conforme necessário, dependendo do seu sistema operacional.

# Execução do Programa

Após a compilação, execute o programa fornecendo o número desejado de termos como argumento:

```./run 1000 ```
Substitua "1000" pelo número desejado de termos na série de Taylor.

# Ajuste de Precisão:

Você pode ajustar a precisão da biblioteca GMP modificando o valor passado para mpf_init2 na função calculate no arquivo projetoFinal.c. Um valor maior resultará em maior precisão, resultando em um aumento do tempo de execução.

# Verificação dos Resultados

Após a execução bem-sucedida, o programa exibirá a aproximação de `e` até o termo especificado e o tempo de execução.
# Verificação Manual:

Você pode comparar os resultados com valores conhecidos da série de Taylor para `e`.

Utilize ferramentas matemáticas ou linguagens de script para calcular a aproximação manualmente e verificar a consistência com os resultados do programa.

# Valores de Referência:

Consulte literatura matemática ou fontes confiáveis para obter valores de referência da constante de Euler (`e`) para comparar com os resultados do programa.
