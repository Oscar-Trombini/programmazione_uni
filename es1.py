
# python es1.py
# autograding.online per la valutazione del programma

# scrivere una funzione da chiama sum_list che abbia un argomento di una lis, e 
# questa funzione sommerà la lista

def sum_list(list ):
  if(len(list)!=0):
    return sum(list)
  else:
    return None
  

list = []

print('La somma è : {}'.format(sum_list(list)))

#prova

# git add .
# git commit -m "19/11"
# git push