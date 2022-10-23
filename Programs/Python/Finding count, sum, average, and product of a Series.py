# Finding count, sum, average, and product of a Series

def InpSeries():
    print("Enter a series of positive numbers. (To finish the series, enter a negative number)")
        
    n = float(input())
    count = 0
    sum = 0
    avg = 0
    prod = 1
    
    if n<0:
        print("Invalid Number")
    
    else:
        while n>=0:
            sum = sum + n
            prod = prod * n

            n = float(input())
            
            count = count + 1
            avg = (sum)/count
            
        if n<0:
            print("Your series is completed.")
        
        return count, sum, avg, prod

def main():
    f, c, i, t= InpSeries()
    
    print("Count ="   ,f)
    print("Sum ="     ,c)
    print("Average =" ,i)
    print("Product =" ,t)

main()