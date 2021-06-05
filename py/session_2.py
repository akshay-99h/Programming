#!/usr/bin/env python
# coding: utf-8


import numpy as np
import random
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression, LinearRegression


X = np.arange(-25, 25)
labels = np.arange(-25, 25)
labels = [np.tanh(i) + random.uniform(-0.24, 0.25) for i in labels]
plt.scatter(X, labels)


reg = LogisticRegression()

X = X.reshape(-1,1)
l2 = [0 if i < 0 else 1 for i in labels]
reg.fit(X, l2)

y_nicer = reg.predict(X)

"""
y_pred = []
for x in X:
    y_pred.append(w*x + b)
"""

y_nicer

labels


plt.scatter(X, l2)
plt.plot(X, y_nicer, 'g')

plt.scatter(X, l2)
plt.plot(X, y_nicer)


reg.score(X, l2)