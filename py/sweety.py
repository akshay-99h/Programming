import matplotlib.pyplot as plt
passpk= [20,67,45,23,78,9,100]
passpj= [15,65,58,33,70,88,90]
passpp= [33,44,55,66,45,78,65]
year= [2014, 2015, 2016, 2017, 2018, 2019, 2020]
plt.plot(year, passpk, color='g')
plt.plot(year, passpj, color='r')
plt.plot(year, passpp, color='b')
plt.xlabel("Year")
plt.ylabel("Pass%")
plt.title("Comparison of KV and JNU passing %")
plt.legend("KV","JNU", "PRIVATE")
loc="lower right"
plt.show()