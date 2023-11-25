class CSVFile():

    def __init__(self, name):
        self.name = name

    def get_data(self):
        list = []
        list2= []
        file = open(self.name, 'r')

        next(file)
        
        for line in file:
                list = line.split(',')
                list2.append(list)

        return list2
     

csvfile = CSVFile('little_shampoo.csv')
print(csvfile.get_data())