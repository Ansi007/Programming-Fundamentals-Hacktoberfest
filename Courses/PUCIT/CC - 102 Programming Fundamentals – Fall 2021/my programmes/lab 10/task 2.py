from ex_4Darray import *
# solution task 1
# Write a function to compute and display the program wise average
def progWiseAvg(m):
    progWavg = [0]*4
    for prog in range(4):
        for sem in range(8):
            for sub in range(6):
                for stud in range(50):
                    progWavg[prog] += m[prog][sem][sub][stud]

    print("program offered Wise Average")
    for p in range(4):
        print("programme", p, progWavg[p]/8.0/6.0/50.0)
# solution task 2
#  Write a function to compute and display the semester wise average
def semWiseAvg(m):
    semWavg = [0]*8
    for sem in range(8):
        for prog in range(4):
            for sub in range(6):
                for stud in range(50):
                    semWavg[sem] += m[prog][sem][sub][stud]

    print("semester Wise Average")
    for s in range(8):
        print("semester:", s,":", semWavg[s]/4.0/6.0/50.0)
# solution task 4
#  Write a function to compute and display the program (passed as parameter) + semester wise average
#redefining
def SemWiseAvg4Prog(m, prog):
    semWavg = [0]*8
    for sem in range(8):
            for sub in range(6):
                for stud in range(50):
                    semWavg[sem] += m[prog][sem][sub][stud]

    print("semester Wise Average for program number:",prog)
    for s in range(8):
        print("semester:", s,":", semWavg[s]/6.0/50.0)
# solution task 5
#  Write a function to compute and display the result of student of a program, both passed as parameters
def results(m,prog,stud):
    totmarks = 0
    for sem in range(8):
        for sub in range(6):
            b = m[prog][sem][sub][stud]
            totmarks = b + totmarks
    print("the gained percentage of student :",stud,"of program number: ",prog,"is:",totmarks/8.0/6.0,"%")
def main():
    data = [[[[randint(10,99) for k in range(50)] for j in range(6)] for i in range(8)] for g in range(4)]
    progWiseAvg(data)
    print()
    semWiseAvg(data)
    print()
    prog = int(input("enter the programme whose average you want to observe"))
    SemWiseAvg4Prog(data, prog)
    print()
    stud = int(input("enter the roll no of student to observe the result "))
    results(data,prog,stud)
main()









