soma=0
n1 = int(input('Insira o 1 numero'))
if(n1%2==0):
 soma+=n1
n2 = int(input('Insira o 2 numero'))
if(n2%2==0):
 soma+=n2
n3 = int(input('Insira o 3 numero'))
if(n3%2==0):
 soma+=n3
n4 = int(input('Insira o 4 numero'))
if(n4%2==0):
 soma+=n4
n5 = int(input('Insira o 5 numero'))
if(n5%2==0):
 soma+=n5
n6 = int(input('Insira o 6 numero'))
if(n6%2==0):
 soma+=n6
if(soma==0):
 print('Erro, todos são impares')
else:
 print('A soma é ' + str(soma))