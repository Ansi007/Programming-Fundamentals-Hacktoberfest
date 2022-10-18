#  Consider a four dimensional array contains the percentage marks for students
#  first dimension is for program no (0,1,2 and 3)
#  second dimension is for semester no (0,1,2,3,4,5,6 and 7)
#  third  dimension is for subject no (0,1,2,3,4 and 5)
#  fourth dimension is for student no (0,1,2,3,4,...,49)

#  Write a function to compute and display the program wise average
#  Write a function to compute and display the semester wise average
#  Write a function to compute and display the subject wise average
#  Write a function to compute and display the program (passed as parameter) + semester wise average
#  Write a function to compute and display the result of student of a program, both passed as parameters

#  Following is code to populate the array with suitable random values and display them.

from random import randint

# Solution problem 3
# Write a function to compute and display the subject wise average
def SubWiseAvg(m):
	swsum = [0]*6
	for sub in range(6):
		for prog in range (4):
			for sem in range(8):
				for stud in range(50):
					swsum[sub] += m[prog][sem][sub][stud]

	print("Subject Wise Average")
	for sub in range(6):
		print("Sub", sub, swsum[sub]/4.0/8.0/50.0)

# Function structure for following task
# Write a function to compute and display the program
# (passed as parameter) + semester wise average
def SemWiseAvg4Prog(m, prog):
	pass

# Following is code for main to populate the array with
# suitable random values and diplay them.
def main():
	data = [[[[randint(10,99) for k in range(50)] for j in range(6)] for i in range(8)] for g in range(4)]

	SubWiseAvg(data)
	
	
	# Style 1: output data with random marks
	ofl = open("marks1.txt", "w")
	
	v=0
	while v<4:
		ofl.write("Program " + str(v) + "\n")
		w=0
		while w<8:
			ofl.write("\tSemester " + str(w) + "\n")
			x=0
			while x<6:
				ofl.write("\t\tSubject " + str(x) + "\n")
				y=0
				while y<50:
					ofl.write("\t\t\tStudent " + str(y))
					ofl.write(" marks " + str(data[v][w][x][y]) + "\n")
					y+=1
				x+=1
			w+=1
		v+=1
	
	ofl.close

	# Style 2: output data with random marks
	of2 = open("marks2.txt", "w")
	v=0
	while v<4:
		of2.write("Program " + str(v) + "\n")
		w=0
		while w<8:
			of2.write("\tSemester " + str(w) + "\n")
			of2.write("\t\tStudent No. ")

			x=0
			while x<6:
				of2.write("Sb" + str(x) + "\t")
				x+=1
			of2.write("\n")
			y=0
			while y<50:
				x=0
				of2.write("\t\tStudent ")
				of2.write(str(y)+"\t")
				while x<6:
					of2.write(str(data[v][w][x][y]) + "\t")
					x+=1
				of2.write("\n")
				y+=1
			w+=1
		v+=1
	of2.close

main()
