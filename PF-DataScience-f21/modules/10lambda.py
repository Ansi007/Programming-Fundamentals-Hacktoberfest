def main():
   sum = lambda a,b,c : a+b+c
   
   x = float(input("Enter a number: "))
   y = float(input("Enter a number: "))
   z = float(input("Enter a number: "))
   
   print(sum(x,y,z))
   
main()

# Program to filter out only the even items from a list
my_list = [1, 5, 4, 6, 8, 11, 3, 12]
new_list = list(filter(lambda x: (x%2 == 0) , my_list))
print(new_list)

# Program to double each item in a list using map()

my_list = [1, 5, 4, 6, 8, 11, 3, 12]
new_list = list(map(lambda x: x * 2 , my_list))
print(new_list)



'''
We use lambda functions when we require a nameless function for a short period of time. In Python, we generally use it as an argument to a higher-order function (a function that takes in other functions as arguments). Lambda functions are used along with built-in functions like filter() , map() etc.
'''