"""
Faça um programa que leia algo
pelo teclado o seu tipo primitivo
e todas as informações possíveis 
sobre ele
"""

algo = input('Digite algo: ')
print(f'O tipo primitivo desse valor é {type(algo)} ')
print(f'{algo} é tudo maiúsculo? {algo.isupper()}')
print(f'{algo} é Alphanumérico? {algo.isalnum()}')
print(f'{algo} é numerico? {algo.isnumeric()}')
print(f'{algo} Está dentro do alfabeto? {algo.isalpha()}')
print(f'{algo} é um decimal? {algo.isdecimal()}')
print(f'{algo} é um digito? {algo.isdigit()}')
print(f'{algo} é um identificador? {algo.isidentifier()}')
print(f'{algo} é tudo minúsculo? {algo.islower()}')
print(f'{algo} é printavel? {algo.isprintable()}')
print(f'{algo} é um espaço? {algo.isspace()}')
print(f'{algo} é um titulo? {algo.istitle()}')