"""
Faça um algoritmo que leia
o preço de um produto e 
mostre seu novo preço, com 
5% de desconto
"""

preco = float(input('Digite o preço do produto: '))
desconto = preco* (5/100)
print(f'Com desconto o seu produto fica em R${preco-desconto:.2f}')