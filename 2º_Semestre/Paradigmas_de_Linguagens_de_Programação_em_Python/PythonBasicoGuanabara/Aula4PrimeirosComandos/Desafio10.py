"""
Crie um programa que leia
quanto dinheiro uma pessoa 
tem na carteira e mostre 
quantos dólares ela pode comprar

Considere US$1,00 = R$3,27
"""
dinheiro = float(input('Digite o quanto você tem na carteira em R$? '))
dolar = dinheiro * 3.27
print(f'Você possui R${dinheiro:.2f} na carteira e poderia comprar U${dolar:.2f} dolares!')