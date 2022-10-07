from sklearn.model_selection import train_test_split

import numpy as np
import pandas as pd

datasets = pd.read_csv("./Data.csv")
X = datasets.iloc[:, :-1].values
Y = datasets.iloc[:, -1].values
X_train, X_test, Y_train, Y_test = train_test_split(
    X, Y, test_size=0.2, random_state=1)


print("Training set Independent Variables : ")

print(X_train)
print("Test set Independent Variables : ")

print(X_test)
print("Training set Dependent Variables : ")

print(Y_train)
print("Test set Dependent Variables : ")


print(Y_test)
