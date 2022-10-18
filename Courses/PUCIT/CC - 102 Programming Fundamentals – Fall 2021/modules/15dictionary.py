my_dict = {'name': 'Jack', 'age': 26, 'age': 45, 'wage': 57000}
my_dict['cell'] = '03003003003'
print(my_dict['name'])
print(my_dict.get('age'))

#print(my_dict[1])

print(my_dict.keys())
print(my_dict.values())

for i in my_dict:
    print(my_dict[i])

my_iter = iter(my_dict)
print(my_iter)
print(next(my_iter))
print(next(my_iter))
print(hasnext(my_iter))

