idade=int(input("Digite a sua idade"))
resto = 0
if(idade<18):
 resto=18-idade
 print("Você ainda vai se alistar, faltam cerca de " + str(resto) + 
" anos")
elif(idade==18):
 print("Está na hora de você se alistar")
else:
 resto=idade-18
 print("Já passou fazem " + str(resto) + " anos")
