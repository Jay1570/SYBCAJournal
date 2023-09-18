import pandas as p
import matplotlib.pyplot as plt
#Read Data into DataFrame
data={
        'Prod_name':['Smartphone','Refrigerator','Air Conditioner','Washing Machine','Laptop'],
        'JAN':[80,34,43,20,46],
        'FEB':[90,32,45,11,34],
        'MAR':[75,40,56,36,65],
        'APR':[95,34,54,23,45],
        'MAY':[56,43,56,67,43],
        'JUN':[87,54,32,9,76]
    }
df=p.DataFrame(data)
print("Read Data Into DataFrame :-\n",df)
#Calculate Total Sell And Average Sell
df['total_sell']=df.iloc[:,1:7].sum(axis=1)
df['average_sell']=df.iloc[:,1:7].mean(axis=1)
print("Average Sell and Total Sell :-\n",df)
#Line Chart
plt.figure(figsize=(10,6))
plt.plot(df['Prod_name'],df['total_sell'],label='total_sell')
plt.plot(df['Prod_name'],df['average_sell'],label='average_sell')
plt.xlabel('Products')
plt.ylabel('Amount')
plt.title('Sales Analysis')
plt.xticks(rotation=45)
plt.legend()
#DataFrame To CSV
df.to_csv('sell_analysis.csv',index=False)
#Show Chart
plt.tight_layout()
plt.show()
