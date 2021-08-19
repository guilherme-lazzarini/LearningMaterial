idade=int(input("Digite o seu ano de nascimento"))
resto = 2019 - idade
if(resto<9):
 print("Mirim")
elif(resto>=9 and resto<14):
 print("Infantil")
elif(resto>=14 and resto<19):
 print("Junior")
elif(resto>=19 and resto<20):
 print("Senior")
else:
 print("Master")