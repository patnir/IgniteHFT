import json
import csv

amzn = {}

fieldNames = ("Date", "Open", "High", "Low", "Close", "Volume", "Adj Close");

amzn_csv  = open('S&P/AMZN.csv', 'r')
amzn_json = open('AMZN.json', 'w')

reader = csv.DictReader(amzn_csv, fieldNames)
amzn_json.write('[')
i = 0
for row in reader:
    if i is 0:
        i = i + 1
        continue
    newRow = {}
    newRow['Open'] = float(row['Open'])
    newRow['High'] = float(row['High'])
    newRow['Close'] = float(row['Close'])
    newRow['Volume'] = int(row['Volume'])
    newRow['Adj Close'] = float(row['Adj Close'])
    newRow['Low'] = float(row['Low'])
    newRow['Date'] = row['Date']
    json.dump(newRow, amzn_json)
    amzn_json.write(',\n')

amzn_json.write(']')
