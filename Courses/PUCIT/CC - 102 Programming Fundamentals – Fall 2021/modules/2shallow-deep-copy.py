import copy

old_list = [[1, 1, 1], [2, 2, 2], [3, 3, 3]]
new_list = copy.copy(old_list)
print()
old_list[1][1] = 'AA'
old_list.append([4, 4, 4])
print("Old list:", old_list)
print("New list:", new_list)
print(id(old_list))
print(id(new_list))


old_list = [[1, 1, 1], [2, 2, 2], [3, 3, 3]]
new_list = copy.deepcopy(old_list)

old_list[1][0] = 'BB'
old_list.append([4, 4, 4])

print("Old list:", old_list)
print("New list:", new_list)
print(id(old_list))
print(id(new_list))
