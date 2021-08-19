x = 0
soma = 0
while x<10:
 nota = int(input("Insira a nota do aluno " + str(x+1)))
 soma += nota
 x+=1
print("A média é " + str(soma/10))
