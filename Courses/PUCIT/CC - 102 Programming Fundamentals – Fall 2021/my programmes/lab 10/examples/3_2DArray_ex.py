timing = ["Morning", "Noon", "Evening"]

city = ["Multan","Layya","Kasur","Lahore","DG Khan","Gujrat"]

temp = [
		[34.4, 54.3, 65.6, 34.4, 43.2, 55.6],
		[53.6, 23.3, 54.9, 49.0, 38.5, 34.6],
		[35.2, 54.4, 40.4, 54.6, 76.3, 65.2]
	   ]

print()  # print a blank line

# dumping temps
print("Timing", end="\t")

j = 0
while j < 6:
	print(city[j], end="\t")
	j += 1
print()

j = 0
while j < 3:
	print(timing[j], end="\t")
	k = 0
	while k < 6:
		print(temp[j][k], end="\t")
		k += 1
	j += 1
	print()


# computation for average of DG Khan
dgkavg = 0.0
j = 0
while j < 3:
	dgkavg += temp[j][4]
	j += 1
dgkavg /= 3.0

# computation for total of Noon
noontot = 0.0
j = 0
while j < 6:
	noontot += temp[1][j]
	j += 1

# computation for max of cities
mxtm = [0.0]*6
j = 0
while j < 6:
	mxtm[j] = temp[0][j]
	k = 1
	while k < 3:
		if temp[k][j] > mxtm[j]:
			mxtm[j] = temp[k][j]
		k += 1
	j += 1

# dumping statistics
print()
print("Average for DG Khan", dgkavg)
print("Total at noon", noontot)
print()
print("Max temp for cities")
print("===================")
print("City", "\t", "Max")
print("------------------")
j = 0
while j < 6:
	print(city[j], "\t", mxtm[j])
	j += 1
