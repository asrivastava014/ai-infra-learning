#!/usr/bin/env python3

from sklearn.datasets import load_iris
from sklearn.tree import DecisionTreeClassifier

# Load built-in iris dataset
iris = load_iris()

# Train a simple decision tree classifier
clf = DecisionTreeClassifier()
clf.fit(iris.data, iris.target)

# Run a prediction on the first sample
sample = iris.data[0]
print("Input sample:", sample)
print("True label:", iris.target[0])
print("Predicted label:", clf.predict([sample])[0])
