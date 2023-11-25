def sum_csv(file):
    dati = []
    file = open(file, 'r')
    s = 0
    for line in file:
        dati = line.split(',')

        if dati[0]!='Date':
            val = float(dati[1])
            s += val

    file.close()
    return s

# print("la somma delle date è : {}".format(sum_csv('shampoo_sales')))

 