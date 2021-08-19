x=0
idadeMaior="."
idadeM=0
soma1=0
soma2=0
for x in range(4):
 nome=input("Insira o nome da " + str(x+1) + " pessoa")
 idade = int(input("Insira a idade de " + nome))
 sexo = input("Insira o sexo de " + nome + " (M ou F)")
 soma1+=idade
 if idade>idadeM and sexo=="M":
 idadeMaior=nome
 idadeM=idade
 if idade<20 and sexo=="F":
 soma2+=1
 x+=1
print("A média das idades é " + str(soma1/x))
print("O Nome do homem mais velho é " + idadeMaior)
print("O número de mulheres com menos de 20 anos é " + 
str(soma2))
