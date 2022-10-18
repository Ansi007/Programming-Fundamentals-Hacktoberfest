def main():
	numfile = "nums.txt"
	ifile = open(numfile, "r")  # should be in try

	a = [-1]*10

	print("Start")
	for j in range(10):
		a[j] = ifile.readline()
		print(a[j])  # ascii it, comment it,
	print("End")
	
	ifile.close()
	# print(a)  # uncomment it
	
	return 0

main()
