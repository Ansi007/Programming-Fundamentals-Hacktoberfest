class klass:
   def __init__(self, f, s):
      self.first = f
      self.second = s

# Bubble sort in Python

def bubbleSort(array):
    
  # loop to access each array element
  for i in range(len(array)):

    # loop to compare array elements
    for j in range(0, len(array) - i - 1):

      # compare two adjacent elements
      # change > to < to sort in descending order
      if array[j] > array[j + 1]:

        # swapping elements if elements
        # are not in the intended order
        temp = array[j]
        array[j] = array[j+1]
        array[j+1] = temp

#data = [-2, 45, 10, 1, -9]
#data = ["Jamal", "Zaid", "Arshad", "Qamar", "Majeed"]
data = [klass(99,24), klass(71,0), klass(45,89), klass(-5,35), klass(-2,12)]
print('Data in the Array')
print(data)

bubbleSort(data)

print('Sorted Array in Ascending Order')
print(data)