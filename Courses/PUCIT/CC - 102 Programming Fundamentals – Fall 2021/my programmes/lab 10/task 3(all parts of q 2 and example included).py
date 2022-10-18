from random import randint
# solution task 1
# Write a function to compute and display the program wise average
def progWiseAvg(m):
    progWavg = [0]*4
    for prog in range(4):
        for sem in range(8):
            for sub in range(6):
                for stud in range(50):
                    progWavg[prog] += m[prog][sem][sub][stud]

    a = [0]*4
    for p in range(4):
        a[p] = progWavg[p]/8.0/6.0/50.0
    return a
# solution task 2
#  Write a function to compute and display the semester wise average
def semWiseAvg(m):
    semWavg = [0]*8
    for sem in range(8):
        for prog in range(4):
            for sub in range(6):
                for stud in range(50):
                    semWavg[sem] += m[prog][sem][sub][stud]

    a = [0]*8
    for i in range(8):
        a[i] = semWavg[i]/4.0/6.0/50.0
    return a
# Solution problem 3
# Write a function to compute and display the subject wise average
def SubWiseAvg(m):
    swsum = [0]*6
    for sub in range(6):
        for prog in range (4):
            for sem in range(8):
                for stud in range(50):
                    swsum[sub] += m[prog][sem][sub][stud]
    a = [0]*6
    for s in range(6):
        a[s] = swsum[s]/4.0/8.0/50.0
    return a
# solution task 4
#  Write a function to compute and display the program (passed as parameter) + semester wise average
def SemWiseAvg4Prog(m, prog):
    semWavg = [0]*8
    for sem in range(8):
            for sub in range(6):
                for stud in range(50):
                    semWavg[sem] += m[prog][sem][sub][stud]

    a = [0]*8
    for s in range(8):
        a[s] = semWavg[s]/6.0/50.0
    return a
# solution task 5
#  Write a function to compute and display the result of student of a program, both passed as parameters
def results(m,prog,stud):
    totmarks = 0
    for sem in range(8):
        for sub in range(6):
            b = m[prog][sem][sub][stud]
            totmarks = b + totmarks
    return totmarks/8.0/6.0
# printing in reasonable form in main
def main():
    data = [[[[randint(10,99) for k in range(50)] for j in range(6)] for i in range(8)] for g in range(4)]
    #for printing program wise average
    pavg = progWiseAvg(data)
    print("the average based on the programs offered by University is as follows")
    print("the average of BSCS is: ",pavg[0])
    print("the average of BSSE is: ",pavg[1])
    print("the average of BSIT is: ",pavg[2])
    print("the average of BSDS is: ",pavg[3])
    print("===============================")
    print("the total  average based on the semester is as follows")
    smavg = semWiseAvg(data)
    for i in range(8):
        print("the average of semester number ",i+1,"is ",smavg[i])
    print("===============================")
    print("the total  average based on the subject is as follows")
    subavg = SubWiseAvg(data)
    for i in range(6):
        print("the average of subject number ",i+1,"is ",subavg[i])
    print("===============================")
    prog = int(input("enter the programme whose average you want to observe"))
    sVpAvg = SemWiseAvg4Prog(data, prog)
    for i in range(8):
        print("the average of semester number ",i+1,"of program number",prog,"is ",sVpAvg[i])
    print("===============================")
    stud = int(input("enter the roll no of student to observe the result "))
    p = int(input("enter the degree program number of student aswell "))
    r = results(data,p,stud)
    print("the gained percentage of student :",stud,"of program number: ",p,"is:",r,"%")
main()









