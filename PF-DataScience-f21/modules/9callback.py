from sorting import bubbleSort

class klass:
   def __init__(self, f, s):
      self.first = f
      self.second = s

   def __repr__(self):
      return "Klass:("+str(self.first)+", "+str(self.second)+")"

#   def __str__(self):
#     return "("+str(self.first)+", "+str(self.second)+")"

def naturalComparer(a, b):
   return a > b

def klassComparer(a, b):
   return abs(a.first-a.second) > abs(b.first-b.second)

#data = [-2, 45, 10, 1, -9]
#data = ["Jamal", "Zaid", "Arshad", "Qamar", "Majeed"]
data = [klass(99,24), klass(71,0), klass(45,89), klass(-5,35), klass(-2,12)]
print('Data in the Array')
print(data)

bubbleSort(data, klassComparer)

print('Sorted Array in Ascending Order')
print(data)


