"""
Faça um algoritmo que leia
o salario de um funcionário
e mostre o seu novo salario,
com 15% de aumento
"""
salario = float(input('Digite o seu salario: '))
aumento = salario * (15/100)
novoSalario = salario + aumento
print(f'O seu salario atual é R${salario:.2f} e vai ter um aumento de R${aumento:.2f}')
print(f'O seu novo salário fica em R${novoSalario:.2f}. Parabéns!!')