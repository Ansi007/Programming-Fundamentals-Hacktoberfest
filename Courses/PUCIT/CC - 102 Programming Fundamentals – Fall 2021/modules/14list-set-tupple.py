fish = ['barracuda','cod','devil ray','eel']
print(fish)

fish.append('flounder')
print(fish)

fish.insert(2,'anchovy')
print(fish)

more_fish = ['goby','herring','ide','gourami']
fish.extend(more_fish)
print(fish)

fish.remove('flounder')
print(fish)

print(fish.pop(3))
print(fish)

print(fish.pop())
print(fish)

fish.reverse()
print(fish)

fish.sort()
print(fish)

fish = fish + more_fish
print(fish)

print(fish.index('herring'))

print(fish.count('goby'))
print(fish.count('rahu'))

print(fish)
print(fish[2])
print(fish[-3])
print(fish[5:])
print(fish[-5:])
print(fish[-5:-9])  # :+9
print(fish[3:10:2])


tmp = tuple(fish)

fish.clear()
print(fish)

print("--------------------")

fish = tmp
print(fish)

#fish.append('flounder')
#fish.insert(2,'anchovy')
#fish.extend(more_fish)
#fish.remove('flounder')
#print(fish.pop(3))
#print(fish.pop())
#fish.reverse()
#fish.sort()
print(fish.index('herring'))
print(fish.count('goby'))
print(fish.count('rahu'))
#fish.clear()

print(fish)
print(fish[2])
print(fish[-3])
print(fish[5:])
print(fish[-5:])
print(fish[-5:-9])  # :+9
print(fish[3:10:2])

print("--------------------")

tmp = set(fish)
fish = tmp.copy()
print(fish)

fish.add('rahu')
print(fish)

#fish.remove('flounder')
fish.remove('eel')
print(fish)

fish.discard('whale')
print(fish)

#print(fish.pop(3))
print(fish.pop())
print(fish)

#fish.reverse()
#fish.sort()
#print(fish.index('herring'))
#print(fish.count('goby'))
#print(fish.count('rahu'))
fish.clear()
print(fish)

#print(fish[2])
#print(fish[-3])
#print(fish[5:])
#print(fish[-5:])
#print(fish[-5:-9])  # :+9
#print(fish[3:10:2])

print("set can have UNIION, INTERSECTION, DIFFERENCE, SUBSET functionalities")
print("set can have IS SUBSET, IS SUPERSET, DISJOIINT functionalities")
print("set can have IN, ANY, ALL, LEN, MAX, MIN, SUM functionalities")
print("set can be SORTED but to a list")

fish = tmp
print(fish)
print({'barracuda','eel'}.issubset(fish))
print({'barracuda','eel', 'flounder'}.issubset(fish))
print(fish.issuperset({'barracuda','eel'}))
