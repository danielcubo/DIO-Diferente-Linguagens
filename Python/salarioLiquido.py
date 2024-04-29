def descontarINSS(paramSalarioBase):
    descontoINSS = 0.0

    if paramSalarioBase <= 1412:
        descontoINSS = paramSalarioBase * 0.075
    elif paramSalarioBase > 1412 and paramSalarioBase <= 2666.68: 
        descontoINSS = paramSalarioBase * 0.09
    elif paramSalarioBase > 2666.68 and paramSalarioBase <= 4000.03:
        descontoINSS = paramSalarioBase * 0.12
    else:
        descontoINSS = paramSalarioBase * 0.14
    return descontoINSS

print('Digite o salario: ')
salarioBase = float(input())

print('Digite o beneficio: ')
beneficio = float(input())

descontoINSS = descontarINSS(salarioBase)

salarioLiquido = (salarioBase - descontoINSS) + beneficio

print("***** Folha de Pagamento *****")
print('Salario base: %.2f' %salarioBase)
print('Beneficios: %.2f' %beneficio)
print('Descontos: %.2f' %descontoINSS)
print('Salario Liquido: %.2f' %salarioLiquido)