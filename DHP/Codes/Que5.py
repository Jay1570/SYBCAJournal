import pandas as p
data=p.read_csv('item.csv')
#Write CSV file
new_item={'Item_no':9,'Item_name':'Mouse','Price':800,'Qty':500}
new_item['total']=new_item['Price']*new_item['Qty']
data=data._append(new_item,ignore_index=True)
data.to_csv('item.csv',index=False)
#Display Item name and price whose price is between 1000 to 5000
filtered=data[(data['Price']>=1000) & (data['Price']<=5000)]
print(filtered[['Item_name','Price']])
#Alternate Records
print("Alternate Records :-\n",data.iloc[::2])
#Minimum & Maximum Price
min=data[data['Price']==data['Price'].min()]
max=data[data['Price']==data['Price'].max()]
print("Minimum :-\n",min)
print("Maximum :-\n",max)
#Sort
sorted=data.sort_values(by='Item_name')
print("Sorted :-\n",sorted)
#Display Rows Between 3 & 7
print("Rows Between 3 & 7:-\n",data.iloc[2:7])
#Last 6 Rows
print("Last 6 Rows :-\n",data.tail(6))
