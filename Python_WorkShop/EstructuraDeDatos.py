lista = [1,2,3,4,5]

for i in range(len(lista):
	print(lista[i])
	print("index[%d] => %d"%(i,lista[i]))

#ordenamiento burbuja

lista = [4,2,6,8,5,7]
for i in range(len(lista): #recorre la lista
	for x in range(len(lista)-1): # recorre cada elemento
		if lista[x] >lista[x+1] : # revisa que la condicion se cumpla
			aux = lista[x]
			lista[x] = lista [x+1]
			lista [x+1] = aux
			print (lista)

#ordenamiento por seleccion
lista = [4,2,6,8,5,7]
for i in range(len(lista)):#recorre la lista
	minimo = i
	for x in range(i,len(lista)): # recorre cada elemento
		if lista[x] < lista[minimo]: # revisa que la condicion se cumpla
			minimo = x
		aux = lista[i]
		lista[i] = lista[minimo]
		lista[minimo] = aux
	print(lista)
#ordenamiento por seleccion
lista = [4,2,6,8,5,7]
for i in range(1,len(lista)):
	aux = lista[i]
	j = i-1
	while j >= 0 :
		if aux < lista[j] :
			lista[j+1] = lista[j]
			lista[j] = aux
			j -= 1
	print(lista)	

