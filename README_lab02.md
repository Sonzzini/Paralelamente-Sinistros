## Como conectar uma máquina red hat ao repositório git:
1. Ter certeza de ter o git na máquina com `sudo yum install git` e testar com `git --version`
2. Gerar uma chave SSH com `ssh-keygen -t rsa "seu.email@email.com"`
3. Copiar os conteúdos da chave SSH em `~/.ssh/id_rsa.pub` às chaves SSH do seu perfil no github, pegando os conteúdos do arquivo na máquina com um `cat`
4. Testar a chave SSH com `ssh -T git@github.com`. Deve devolver "Hi <seu_nome>! You've successfully authenticated, but GitHub does not provide shell access."
5. Clonar o repositório com `git clone <URL_do_repositório>`

Pronto!

## Forma de criar, rodar/testar e enviar os exercícios ao repositório github utilizando o ambiente da amazon:

![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/77c230d4-e710-42fd-bcf1-9f75a173ccb6)

Foi usado o vi para a criação dos arquivos em C, o gcc para compilar e testar os arquivos e os seguintes comandos do git para enviar ao repositório:
- git add .
- git commit -m "mensagem do commit"
- git push origin main

## Todos os arquivos (utilizando o comando "ls"):
![image](https://github.com/Sonzzini/Paralelamente-Sinistros/assets/84687052/3efb6eb7-ae61-4fb4-846b-46eb9f932d1c)
