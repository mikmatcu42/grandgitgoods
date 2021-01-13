# -*- coding: utf-8 -*-
"""
Created on Mon May  6 05:58:41 2019

@author: Michael Medeiros
"""

import time
import pandas as pd
import sys 

pd.set_option('display.max_rows', 50)
pd.set_option('display.max_columns', 10)

fdata = pd.read_csv("Raw_flightData.csv")

if (fdata.empty):
    print("not working")
else:
    print("Chilling")

m = 0 
it = 0

while ( m < 860 ):
    it = it+1
    pressdata = fdata.iloc[m,0]
    print(pressdata)
    ##print(tempdata)
    
    m = m + 9
    
    
    
    
    
    
    
    
    
##import sys
##filename  = open("outputfile",'w')
##sys.stdout = filename
##print "Anything printed will go to the output file"