x=0
soma=0
for x in range(7):
 idade=input("Insira a idade da " + str(x+1) + " pessoa")
 if int(idade)<18:
 soma+=1
 x+=1
print("O número de pessoas que precisam atingir a maioridade é " 
+ str(soma))