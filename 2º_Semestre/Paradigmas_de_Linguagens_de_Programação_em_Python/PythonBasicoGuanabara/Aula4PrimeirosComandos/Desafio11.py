"""
Faça um programa que leia a
largura e a altura de uma
parede em metros, calcule a
sua área e a quantidade de 
tinta necessária para pinta-
la. Sabendo que cada litro de 
tinta, pinta um área d 2m²
"""
altura = float(input('Digite a altura da parede: '))
largura = float(input('Digite a largura da parede: '))
area = altura * largura
tinta = area/2
print(f'A area da sua parede tem {area:.2f} e sabendo que cada litro de tinta pinta 2m² será necessário {tinta:.2f}l de tinta')