soma1=0
soma2=0
maior=0
menor=0
x=0
op="."
while op!="1":
 x=int(input("Entre com o valor"))
 if x>maior:
 maior=x
 if op==".":
 menor=x
 else:
 if menor>x:
 menor=x
 soma2+=x
 soma1+=1
 op=input("Deseja continuar?? Não(1) ou Sim(2)")
print("A média total é " + str(soma2/soma1))
print("O menor valor é " + str(menor))
print("O maior valor é " + str(maior))