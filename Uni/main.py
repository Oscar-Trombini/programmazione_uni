x = 3
y ='gatto'
l = [1,2]


diz = {'Ciao': 'prova', 'Bye': 333 }

print('ciao , {}' .format(diz['Ciao']))


if(x > 4):
 print('ciaoo')
else:
 print('ciaoooo')

for item in l:
  print(item)

if(x > 4):
 print('nain')
elif(x==3):
 print('bbbb')

#while
i=0
while i<10:
 print(i)
 i = i+1

print('taaaaaaaaaaaaaaaaab')

#for
for j in range(10):
  print(j)
  
#funzioni
def funz(a,b):
  print("funziona: {} e {}".format(a,b))

funz("pippo","cocacola")

#funzione con ritorno
def eleva(n):
  return n*n

print('funge: {}'.format(eleva(4)))

def prova():
  for k in range(10):
    print('Ciao {}'.format(k))

print('prova {}'.format(prova()))