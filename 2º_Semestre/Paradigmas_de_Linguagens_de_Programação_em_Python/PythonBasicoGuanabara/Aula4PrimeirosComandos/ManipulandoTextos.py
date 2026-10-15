"""
Fatiamento
         
frase = 'Curso em Video Python'
frase[9:13] == Vide (Não inclui o 13)
frase[9:21] == Video Python (Nao inclui o 21)
frase[9:21:2] == VdoPto (Pula de 2 em 2)
frase[:5] == Curso (Ao omitir o inicio ele começa do 0 e vai até o 4)
frase[15:] == Python (Ao omitir o final ele vai ate o final da string que é o 20) 
frase[9::3] == VePh (Começa do 9 e pula de 3 em 3 até o final)
len(frase) == 21 
frase.count('o') == 3 (conta quantos o tem na frase)
frase.count('o',0,13)== 1 (conta quantos o tem na frase já com fatiamento, do 0 ao 13)
frase.find('deo') == 11 (indica onde começa que é o 11)
frase.find('Android') == -1 (significa que nao existe)
'Curso' in frase == True (operador in retorna True ou False)

Transformação

Por via de regra uma lista de string é imutável, ou seja, não da pra mudar ela
mas possível mudar ela atraves de metodos

frase.replace('Pyhton','Android') (Aqui ele substituiria a palavra python pela palavra Android)
frase.upper() (upper significa pra cima, ou seja, a frase ficará tudo no maiúsculo)
frase.lower() (lower significa pra baixo, ou seja, a frase ficará tudo no minúsculo)
frase.capitalize() (vai jogar todos os caracateres para minúsculo e só o primeiro caracter fica maiúsculo)
frase.title() (vai identificar quantas palavras tem nessa frase atraves dos espaços e vai deixar todos os primeiros caracteres em maiúsculo)

frase = "   Aprendendo Python  "

frase.strip() (Remove todos os espaços inúteis do inicio e do final da string)
frase.rstrip() (Remove os espaços só da direita da string, r = right = direita)
frase.lstrip() (Remove os espaços só da esquerda da string, l = left = esquerda)

Divisão

frase.split() (Separa cada palavra e cria uma lista para cada palavra com zerando os indices, ou seja, o split vai dividir uma string em uma lista onde cada elemento vai ser separado pelo espaço)
frase = "Curso em Video Python"
frase.split() == "Curso" "em" "Video" "Python"
'-'.join(frase) == "Curso-em-Video-Python" 
"""

frase = 'Curso em Video Python'
print(frase.replace('Python', 'Android'))

#print("""Nessa aula, vamos aprender operações com String no Python. As principais operações que vamos aprender são o Fatiamento de String, Análise com len(), count(), find(), transformações com replace(), upper(), lower(), capitalize(), title(), strip(), junção com join().""")