x=0
pesoMaior=0
pesoMenor=0
for x in range(5):
 peso=input("Insira o peso da " + str(x+1) + " pessoa")
 if int(peso)>pesoMaior:
 pesoMaior=int(peso)
 if x==0:
 pesoMenor=int(peso)
 else:
 if pesoMenor>int(peso):
 pesoMenor=int(peso)
 x+=1
print("O maior peso é " + str(pesoMaior))
print("O menor peso é " + str(pesoMenor))
