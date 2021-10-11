# Importing libraries
import numpy as np
import pandas as pd

# Creating dataframe with some missing values
NaN = np.nan
print(NaN)
df = pd.DataFrame({'Name': ['Amitabh', 'Rekha',
                            'SHARUKH', 'SALMAN',
                            'PRIYANKA', 'HEMA'],
                   'MOVIES': [500, 470, 450, 467, 0, 340],
                   'SERIAL': [45, 3, NaN, 2, 1, 1],
                   'ADDS': [13, 10, 15, NaN, NaN, 13]})
print("\n")
print(df)

df1 = df[df['MOVIES']>460]
print("\nCount with movies greater than 460 is",len(df1))
print(df1)
