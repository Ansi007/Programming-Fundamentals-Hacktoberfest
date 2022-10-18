def main():

	nl = chr(10)
	ef = chr(26)
	oof = open("text-inners.txt", "w")
	oof.write("Pakistan")
	oof.write(nl)  # comment uncomment
	oof.write(ef)  # comment uncomment
	oof.write("Zindabad")
	oof.close()
	
	return 0

main()